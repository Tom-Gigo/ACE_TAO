// $Id$

#include "RequestProcessingStrategyServantActivatorFI.h"
#include "RequestProcessingStrategy.h"
#include "RequestProcessingStrategyServantActivator.h"
#include "ace/Dynamic_Service.h"
#include "ace/Log_Msg.h"

ACE_RCSID (PortableServer,
           RequestProcessingStrategyServantActivatorFactoryImpl,
           "$Id$")

#if (TAO_HAS_MINIMUM_POA == 0)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    RequestProcessingStrategy*
    RequestProcessingStrategyServantActivatorFactoryImpl::create (
      ::PortableServer::RequestProcessingPolicyValue value,
      ::PortableServer::ServantRetentionPolicyValue srvalue)
    {
      RequestProcessingStrategy* strategy = 0;

      switch (value)
      {
        case ::PortableServer::USE_SERVANT_MANAGER :
        {
          switch (srvalue)
          {
            case ::PortableServer::RETAIN :
            {
              ACE_NEW_RETURN (strategy, RequestProcessingStrategyServantActivator, 0);
              break;
            }
            case ::PortableServer::NON_RETAIN :
            {
              ACE_ERROR ((LM_ERROR, "Incorrect type in RequestProcessingStrategyServantActivatorFactoryImpl"));
              break;
            }
          }
          break;
        }
        default :
        {
          ACE_ERROR ((LM_ERROR, "Incorrect type in RequestProcessingStrategyServantActivatorFactoryImpl"));
          break;
        }
      }

      return strategy;
    }

    void
    RequestProcessingStrategyServantActivatorFactoryImpl::destroy (
      RequestProcessingStrategy *strategy
      ACE_ENV_ARG_DECL)
    {
      strategy->strategy_cleanup (ACE_ENV_SINGLE_ARG_PARAMETER);
      ACE_CHECK;

      delete strategy;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    ACE_STATIC_SVC_DEFINE (
        RequestProcessingStrategyServantActivatorFactoryImpl,
        ACE_TEXT ("RequestProcessingStrategyServantActivatorFactory"),
        ACE_SVC_OBJ_T,
        &ACE_SVC_NAME (RequestProcessingStrategyServantActivatorFactoryImpl),
        ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
        0
      )

    ACE_FACTORY_DEFINE (ACE_Local_Service, RequestProcessingStrategyServantActivatorFactoryImpl)
  }
}

#endif /* TAO_HAS_MINIMUM_POA == 0 */
