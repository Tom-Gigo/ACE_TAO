// -*- C++ -*-
//
// $Id$

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
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:302


#include "MIF_SchedulingC.h"
#include "tao/Typecode.h"
#include "tao/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "MIF_SchedulingC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:60

// Arg traits specializations.
namespace TAO
{
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:60

// Traits specializations for MIF_Scheduling::SegmentSchedulingParameterPolicy.

MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr
TAO::Objref_Traits<MIF_Scheduling::SegmentSchedulingParameterPolicy>::tao_duplicate (
    MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr p
  )
{
  return MIF_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<MIF_Scheduling::SegmentSchedulingParameterPolicy>::tao_release (
    MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr p
  )
{
  CORBA::release (p);
}

MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr
TAO::Objref_Traits<MIF_Scheduling::SegmentSchedulingParameterPolicy>::tao_nil (void)
{
  return MIF_Scheduling::SegmentSchedulingParameterPolicy::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<MIF_Scheduling::SegmentSchedulingParameterPolicy>::tao_marshal (
    MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker *
(*MIF_Scheduling__TAO_SegmentSchedulingParameterPolicy_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

MIF_Scheduling::SegmentSchedulingParameterPolicy::SegmentSchedulingParameterPolicy (void)
{}

MIF_Scheduling::SegmentSchedulingParameterPolicy::~SegmentSchedulingParameterPolicy (void)
{}

void
MIF_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor (void *_tao_void_pointer)
{
  SegmentSchedulingParameterPolicy *_tao_tmp_pointer =
    ACE_static_cast (SegmentSchedulingParameterPolicy *, _tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr
MIF_Scheduling::SegmentSchedulingParameterPolicy::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return SegmentSchedulingParameterPolicy::_nil ();
    }

  SegmentSchedulingParameterPolicy_ptr proxy =
    dynamic_cast<SegmentSchedulingParameterPolicy_ptr> (_tao_objref);

  return SegmentSchedulingParameterPolicy::_duplicate (proxy);
}

MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr
MIF_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (SegmentSchedulingParameterPolicy_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

CORBA::Boolean
MIF_Scheduling::SegmentSchedulingParameterPolicy::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:MIF_Scheduling/SegmentSchedulingParameterPolicy:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* MIF_Scheduling::SegmentSchedulingParameterPolicy::_interface_repository_id (void) const
{
  return "IDL:MIF_Scheduling/SegmentSchedulingParameterPolicy:1.0";
}

CORBA::Boolean
MIF_Scheduling::SegmentSchedulingParameterPolicy::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_MIF_Scheduling_SegmentSchedulingParameterPolicy[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  56,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x4d49465f),
  ACE_NTOHL (0x53636865),
  ACE_NTOHL (0x64756c69),
  ACE_NTOHL (0x6e672f53),
  ACE_NTOHL (0x65676d65),
  ACE_NTOHL (0x6e745363),
  ACE_NTOHL (0x68656475),
  ACE_NTOHL (0x6c696e67),
  ACE_NTOHL (0x50617261),
  ACE_NTOHL (0x6d657465),
  ACE_NTOHL (0x72506f6c),
  ACE_NTOHL (0x6963793a),
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:MIF_Scheduling/SegmentSchedulingParameterPolicy:1.0
    33,
  ACE_NTOHL (0x5365676d), 
  ACE_NTOHL (0x656e7453), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c696e), 
  ACE_NTOHL (0x67506172), 
  ACE_NTOHL (0x616d6574), 
  ACE_NTOHL (0x6572506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x0),  // name = SegmentSchedulingParameterPolicy
  };

static CORBA::TypeCode _tc_TAO_tc_MIF_Scheduling_SegmentSchedulingParameterPolicy (
    CORBA::tk_objref,
    sizeof (_oc_MIF_Scheduling_SegmentSchedulingParameterPolicy),
    (char *) &_oc_MIF_Scheduling_SegmentSchedulingParameterPolicy,
    0,
    sizeof (MIF_Scheduling::SegmentSchedulingParameterPolicy)
  );

namespace MIF_Scheduling
{
  ::CORBA::TypeCode_ptr _tc_SegmentSchedulingParameterPolicy =
    &_tc_TAO_tc_MIF_Scheduling_SegmentSchedulingParameterPolicy;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:60

// Traits specializations for MIF_Scheduling::MIF_Scheduler.

MIF_Scheduling::MIF_Scheduler_ptr
TAO::Objref_Traits<MIF_Scheduling::MIF_Scheduler>::tao_duplicate (
    MIF_Scheduling::MIF_Scheduler_ptr p
  )
{
  return MIF_Scheduling::MIF_Scheduler::_duplicate (p);
}

void
TAO::Objref_Traits<MIF_Scheduling::MIF_Scheduler>::tao_release (
    MIF_Scheduling::MIF_Scheduler_ptr p
  )
{
  CORBA::release (p);
}

MIF_Scheduling::MIF_Scheduler_ptr
TAO::Objref_Traits<MIF_Scheduling::MIF_Scheduler>::tao_nil (void)
{
  return MIF_Scheduling::MIF_Scheduler::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<MIF_Scheduling::MIF_Scheduler>::tao_marshal (
    MIF_Scheduling::MIF_Scheduler_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*MIF_Scheduling__TAO_MIF_Scheduler_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

MIF_Scheduling::MIF_Scheduler::MIF_Scheduler (void)
{}

MIF_Scheduling::MIF_Scheduler::~MIF_Scheduler (void)
{}

void 
MIF_Scheduling::MIF_Scheduler::_tao_any_destructor (void *_tao_void_pointer)
{
  MIF_Scheduler *_tao_tmp_pointer =
    ACE_static_cast (MIF_Scheduler *, _tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

MIF_Scheduling::MIF_Scheduler_ptr
MIF_Scheduling::MIF_Scheduler::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return MIF_Scheduler::_nil ();
    }
  
  MIF_Scheduler_ptr proxy =
    dynamic_cast<MIF_Scheduler_ptr> (_tao_objref);
  
  return MIF_Scheduler::_duplicate (proxy);
}

MIF_Scheduling::MIF_Scheduler_ptr
MIF_Scheduling::MIF_Scheduler::_duplicate (MIF_Scheduler_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

CORBA::Boolean
MIF_Scheduling::MIF_Scheduler::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:RTScheduling/Scheduler:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:MIF_Scheduling/MIF_Scheduler:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* MIF_Scheduling::MIF_Scheduler::_interface_repository_id (void) const
{
  return "IDL:MIF_Scheduling/MIF_Scheduler:1.0";
}

CORBA::Boolean
MIF_Scheduling::MIF_Scheduler::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_MIF_Scheduling_MIF_Scheduler[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x4d49465f), 
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c69), 
  ACE_NTOHL (0x6e672f4d), 
  ACE_NTOHL (0x49465f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c6572), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:MIF_Scheduling/MIF_Scheduler:1.0
    14,
  ACE_NTOHL (0x4d49465f), 
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c65), 
  ACE_NTOHL (0x72000000),  // name = MIF_Scheduler
  };

static CORBA::TypeCode _tc_TAO_tc_MIF_Scheduling_MIF_Scheduler (
    CORBA::tk_objref,
    sizeof (_oc_MIF_Scheduling_MIF_Scheduler),
    (char *) &_oc_MIF_Scheduling_MIF_Scheduler,
    0,
    sizeof (MIF_Scheduling::MIF_Scheduler)
  );

namespace MIF_Scheduling
{
  ::CORBA::TypeCode_ptr _tc_MIF_Scheduler =
    &_tc_TAO_tc_MIF_Scheduling_MIF_Scheduler;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MIF_Scheduling::SegmentSchedulingParameterPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MIF_Scheduling::SegmentSchedulingParameterPolicy>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MIF_Scheduling::SegmentSchedulingParameterPolicy>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr _tao_elem
  )
{
  MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr _tao_objptr =
    MIF_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<MIF_Scheduling::SegmentSchedulingParameterPolicy>::insert (
      _tao_any,
      MIF_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor,
      MIF_Scheduling::_tc_SegmentSchedulingParameterPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<MIF_Scheduling::SegmentSchedulingParameterPolicy>::extract (
        _tao_any,
        MIF_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor,
        MIF_Scheduling::_tc_SegmentSchedulingParameterPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MIF_Scheduling::MIF_Scheduler>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MIF_Scheduling::MIF_Scheduler>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MIF_Scheduling::MIF_Scheduler>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MIF_Scheduling::MIF_Scheduler_ptr _tao_elem
  )
{
  MIF_Scheduling::MIF_Scheduler_ptr _tao_objptr =
    MIF_Scheduling::MIF_Scheduler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MIF_Scheduling::MIF_Scheduler_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<MIF_Scheduling::MIF_Scheduler>::insert (
      _tao_any,
      MIF_Scheduling::MIF_Scheduler::_tao_any_destructor,
      MIF_Scheduling::_tc_MIF_Scheduler,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    MIF_Scheduling::MIF_Scheduler_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<MIF_Scheduling::MIF_Scheduler>::extract (
        _tao_any,
        MIF_Scheduling::MIF_Scheduler::_tao_any_destructor,
        MIF_Scheduling::_tc_MIF_Scheduler,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be/be_visitor_root/root.cpp:1702

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Objref_Traits<
        MIF_Scheduling::SegmentSchedulingParameterPolicy
      >;

  template class
    TAO_Objref_Var_T<
        MIF_Scheduling::SegmentSchedulingParameterPolicy
      >;
  
  template class
    TAO_Objref_Out_T<
        MIF_Scheduling::SegmentSchedulingParameterPolicy
      >;

  template class
    TAO::Any_Impl_T<
        MIF_Scheduling::SegmentSchedulingParameterPolicy
      >;

  template class
    TAO::Objref_Traits<
        MIF_Scheduling::MIF_Scheduler
      >;

  template class
    TAO_Objref_Var_T<
        MIF_Scheduling::MIF_Scheduler
      >;
  
  template class
    TAO_Objref_Out_T<
        MIF_Scheduling::MIF_Scheduler
      >;

  template class
    TAO::Any_Impl_T<
        MIF_Scheduling::MIF_Scheduler
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Objref_Traits< \
        MIF_Scheduling::SegmentSchedulingParameterPolicy \
      >

# pragma instantiate \
    TAO_Objref_Var_T< \
        MIF_Scheduling::SegmentSchedulingParameterPolicy
      >
  
# pragma instantiate \
    TAO_Objref_Out_T< \
        MIF_Scheduling::SegmentSchedulingParameterPolicy
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        MIF_Scheduling::SegmentSchedulingParameterPolicy \
      >

# pragma instantiate \
    TAO::Objref_Traits< \
        MIF_Scheduling::MIF_Scheduler \
      >

# pragma instantiate \
    TAO_Objref_Var_T< \
        MIF_Scheduling::MIF_Scheduler
      >
  
# pragma instantiate \
    TAO_Objref_Out_T< \
        MIF_Scheduling::MIF_Scheduler
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        MIF_Scheduling::MIF_Scheduler \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

