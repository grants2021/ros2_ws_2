

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamSet_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ParamSet_.h"

#include <new>

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParamSet_Request_TYPENAME = "mavros_msgs::srv::dds_::ParamSet_Request_";

            DDS_TypeCode* ParamSet_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ParamSet_Request__g_tc_param_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ParamSet_Request__g_tc_members[2]=
                {

                    {
                        (char *)"param_id_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"value_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ParamSet_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::ParamSet_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ParamSet_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParamSet_Request_*/

                if (is_initialized) {
                    return &ParamSet_Request__g_tc;
                }

                ParamSet_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ParamSet_Request__g_tc_param_id__string;

                ParamSet_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::ParamValue__get_typecode();

                is_initialized = RTI_TRUE;

                return &ParamSet_Request__g_tc;
            }

            RTIBool ParamSet_Request__initialize(
                ParamSet_Request_* sample) {
                return mavros_msgs::srv::dds_::ParamSet_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParamSet_Request__initialize_ex(
                ParamSet_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::ParamSet_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParamSet_Request__initialize_w_params(
                ParamSet_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->param_id_= DDS_String_alloc ((0));
                    if (sample->param_id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->param_id_!= NULL) { 
                        sample->param_id_[0] = '\0';
                    }
                }

                if (!mavros_msgs::msg::dds_::ParamValue__initialize_w_params(&sample->value_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ParamSet_Request__finalize(
                ParamSet_Request_* sample)
            {

                mavros_msgs::srv::dds_::ParamSet_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ParamSet_Request__finalize_ex(
                ParamSet_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::ParamSet_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParamSet_Request__finalize_w_params(
                ParamSet_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->param_id_ != NULL) {
                    DDS_String_free(sample->param_id_);
                    sample->param_id_=NULL;

                }
                mavros_msgs::msg::dds_::ParamValue__finalize_w_params(&sample->value_,deallocParams);

            }

            void ParamSet_Request__finalize_optional_members(
                ParamSet_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                mavros_msgs::msg::dds_::ParamValue__finalize_optional_members(&sample->value_, deallocParams->delete_pointers);
            }

            RTIBool ParamSet_Request__copy(
                ParamSet_Request_* dst,
                const ParamSet_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->param_id_, src->param_id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!mavros_msgs::msg::dds_::ParamValue__copy(
                        &dst->value_,(const mavros_msgs::msg::dds_::ParamValue_*)&src->value_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'ParamSet_Request_' sequence class.
            */
            #define T ParamSet_Request_
            #define TSeq ParamSet_Request_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::ParamSet_Request__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::ParamSet_Request__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::ParamSet_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParamSet_Response_TYPENAME = "mavros_msgs::srv::dds_::ParamSet_Response_";

            DDS_TypeCode* ParamSet_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ParamSet_Response__g_tc_members[2]=
                {

                    {
                        (char *)"success_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"value_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ParamSet_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::ParamSet_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ParamSet_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParamSet_Response_*/

                if (is_initialized) {
                    return &ParamSet_Response__g_tc;
                }

                ParamSet_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                ParamSet_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::ParamValue__get_typecode();

                is_initialized = RTI_TRUE;

                return &ParamSet_Response__g_tc;
            }

            RTIBool ParamSet_Response__initialize(
                ParamSet_Response_* sample) {
                return mavros_msgs::srv::dds_::ParamSet_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParamSet_Response__initialize_ex(
                ParamSet_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::ParamSet_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParamSet_Response__initialize_w_params(
                ParamSet_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                if (!mavros_msgs::msg::dds_::ParamValue__initialize_w_params(&sample->value_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ParamSet_Response__finalize(
                ParamSet_Response_* sample)
            {

                mavros_msgs::srv::dds_::ParamSet_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ParamSet_Response__finalize_ex(
                ParamSet_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::ParamSet_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParamSet_Response__finalize_w_params(
                ParamSet_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                mavros_msgs::msg::dds_::ParamValue__finalize_w_params(&sample->value_,deallocParams);

            }

            void ParamSet_Response__finalize_optional_members(
                ParamSet_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                mavros_msgs::msg::dds_::ParamValue__finalize_optional_members(&sample->value_, deallocParams->delete_pointers);
            }

            RTIBool ParamSet_Response__copy(
                ParamSet_Response_* dst,
                const ParamSet_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!mavros_msgs::msg::dds_::ParamValue__copy(
                        &dst->value_,(const mavros_msgs::msg::dds_::ParamValue_*)&src->value_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'ParamSet_Response_' sequence class.
            */
            #define T ParamSet_Response_
            #define TSeq ParamSet_Response_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::ParamSet_Response__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::ParamSet_Response__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::ParamSet_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

