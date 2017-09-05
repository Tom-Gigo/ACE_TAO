// -*- C++ -*-
// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.dre.vanderbilt.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:154

#ifndef _TAO_IDL_POLICYFACTORYC_H_
#define _TAO_IDL_POLICYFACTORYC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PI/pi_export.h"
#include "tao/ORB.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Objref_VarOut_T.h"

#include "tao/PolicyC.h"

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace PortableInterceptor
{

  // TAO_IDL - Generated from
  // be\be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_POLICYFACTORY__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_POLICYFACTORY__VAR_OUT_CH_

  class PolicyFactory;
  typedef PolicyFactory *PolicyFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        PolicyFactory
      >
    PolicyFactory_var;

  typedef
    TAO_Objref_Out_T<
        PolicyFactory
      >
    PolicyFactory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_PORTABLEINTERCEPTOR_POLICYFACTORY_CH_)
#define _PORTABLEINTERCEPTOR_POLICYFACTORY_CH_

  class TAO_PI_Export PolicyFactory
    : public virtual ::CORBA::Object
  {
  public:
    typedef PolicyFactory_ptr _ptr_type;
    typedef PolicyFactory_var _var_type;

    // The static operations.
    static PolicyFactory_ptr _duplicate (PolicyFactory_ptr obj);

    static void _tao_release (PolicyFactory_ptr obj);

    static PolicyFactory_ptr _narrow (
        ::CORBA::Object_ptr obj

      );

    static PolicyFactory_ptr _unchecked_narrow (
        ::CORBA::Object_ptr obj

      );

    static PolicyFactory_ptr _nil (void)
    {
      return static_cast<PolicyFactory_ptr> (0);
    }



    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46

    virtual ::CORBA::Policy_ptr create_policy (
        ::CORBA::PolicyType type,
        const ::CORBA::Any & value

      )
      = 0;

    // Hand-crafted addition.
    virtual ::CORBA::Policy_ptr _create_policy (
        CORBA::PolicyType type

      );

    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:210

    virtual ::CORBA::Boolean _is_a (
        const char *type_id

      );

    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Abstract or local interface only.
    PolicyFactory (void);

    virtual ~PolicyFactory (void);

  private:
    // Private and unimplemented for concrete interfaces.
    PolicyFactory (const PolicyFactory &);

    void operator= (const PolicyFactory &);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:78

} // module PortableInterceptor

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{

#if !defined (_PORTABLEINTERCEPTOR_POLICYFACTORY__TRAITS_)
#define _PORTABLEINTERCEPTOR_POLICYFACTORY__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::PolicyFactory>
  {
    static ::PortableInterceptor::PolicyFactory_ptr duplicate (
        ::PortableInterceptor::PolicyFactory_ptr
      );
    static void release (
        ::PortableInterceptor::PolicyFactory_ptr
      );
    static ::PortableInterceptor::PolicyFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        ::PortableInterceptor::PolicyFactory_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be\be_codegen.cpp:1040

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */


