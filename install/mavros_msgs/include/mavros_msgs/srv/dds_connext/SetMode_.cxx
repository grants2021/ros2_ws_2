

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMode_.idl using "rtiddsgen".
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

#include "SetMode_.h"

#include <new>

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {
            namespace SetMode_Request_Constants {
            } /* namespace SetMode_Request_Constants  */

            /* ========================================================================= */
            const char *SetMode_Request_TYPENAME = "mavros_msgs::srv::dds_::SetMode_Request_";

            DDS_TypeCode* SetMode_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetMode_Request__g_tc_custom_mode__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetMode_Request__g_tc_members[2]=
                {

                    {
                        (char *)"base_mode_",/* Member name */
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
                        (char *)"custom_mode_",/* Member name */
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

                static DDS_TypeCode SetMode_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::SetMode_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetMode_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMode_Request_*/

                if (is_initialized) {
                    return &SetMode_Request__g_tc;
                }

                SetMode_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                SetMode_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SetMode_Request__g_tc_custom_mode__string;

                is_initialized = RTI_TRUE;

                return &SetMode_Request__g_tc;
            }

            RTIBool SetMode_Request__initialize(
                SetMode_Request_* sample) {
                return mavros_msgs::srv::dds_::SetMode_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMode_Request__initialize_ex(
                SetMode_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::SetMode_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMode_Request__initialize_w_params(
                SetMode_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->base_mode_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->custom_mode_= DDS_String_alloc ((0));
                    if (sample->custom_mode_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->custom_mode_!= NULL) { 
                        sample->custom_mode_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void SetMode_Request__finalize(
                SetMode_Request_* sample)
            {

                mavros_msgs::srv::dds_::SetMode_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetMode_Request__finalize_ex(
                SetMode_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::SetMode_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMode_Request__finalize_w_params(
                SetMode_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->custom_mode_ != NULL) {
                    DDS_String_free(sample->custom_mode_);
                    sample->custom_mode_=NULL;

                }
            }

            void SetMode_Request__finalize_optional_members(
                SetMode_Request_* sample, RTIBool deletePointers)
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

            }

            RTIBool SetMode_Request__copy(
                SetMode_Request_* dst,
                const SetMode_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->base_mode_, &src->base_mode_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->custom_mode_, src->custom_mode_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'SetMode_Request_' sequence class.
            */
            #define T SetMode_Request_
            #define TSeq SetMode_Request_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::SetMode_Request__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::SetMode_Request__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::SetMode_Request__copy

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
            const char *SetMode_Response_TYPENAME = "mavros_msgs::srv::dds_::SetMode_Response_";

            DDS_TypeCode* SetMode_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetMode_Response__g_tc_members[1]=
                {

                    {
                        (char *)"mode_sent_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetMode_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::SetMode_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMode_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMode_Response_*/

                if (is_initialized) {
                    return &SetMode_Response__g_tc;
                }

                SetMode_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetMode_Response__g_tc;
            }

            RTIBool SetMode_Response__initialize(
                SetMode_Response_* sample) {
                return mavros_msgs::srv::dds_::SetMode_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMode_Response__initialize_ex(
                SetMode_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::SetMode_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMode_Response__initialize_w_params(
                SetMode_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->mode_sent_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SetMode_Response__finalize(
                SetMode_Response_* sample)
            {

                mavros_msgs::srv::dds_::SetMode_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetMode_Response__finalize_ex(
                SetMode_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::SetMode_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMode_Response__finalize_w_params(
                SetMode_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetMode_Response__finalize_optional_members(
                SetMode_Response_* sample, RTIBool deletePointers)
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

            }

            RTIBool SetMode_Response__copy(
                SetMode_Response_* dst,
                const SetMode_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->mode_sent_, &src->mode_sent_)) { 
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
            * Configure and implement 'SetMode_Response_' sequence class.
            */
            #define T SetMode_Response_
            #define TSeq SetMode_Response_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::SetMode_Response__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::SetMode_Response__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::SetMode_Response__copy

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

