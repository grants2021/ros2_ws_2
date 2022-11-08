

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EndpointAdd_.idl using "rtiddsgen".
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

#include "EndpointAdd_.h"

#include <new>

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {
            namespace EndpointAdd_Request_Constants {
            } /* namespace EndpointAdd_Request_Constants  */

            /* ========================================================================= */
            const char *EndpointAdd_Request_TYPENAME = "mavros_msgs::srv::dds_::EndpointAdd_Request_";

            DDS_TypeCode* EndpointAdd_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EndpointAdd_Request__g_tc_url__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member EndpointAdd_Request__g_tc_members[2]=
                {

                    {
                        (char *)"url_",/* Member name */
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
                        (char *)"type_",/* Member name */
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

                static DDS_TypeCode EndpointAdd_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::EndpointAdd_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        EndpointAdd_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for EndpointAdd_Request_*/

                if (is_initialized) {
                    return &EndpointAdd_Request__g_tc;
                }

                EndpointAdd_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&EndpointAdd_Request__g_tc_url__string;

                EndpointAdd_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &EndpointAdd_Request__g_tc;
            }

            RTIBool EndpointAdd_Request__initialize(
                EndpointAdd_Request_* sample) {
                return mavros_msgs::srv::dds_::EndpointAdd_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool EndpointAdd_Request__initialize_ex(
                EndpointAdd_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::EndpointAdd_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool EndpointAdd_Request__initialize_w_params(
                EndpointAdd_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->url_= DDS_String_alloc ((0));
                    if (sample->url_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->url_!= NULL) { 
                        sample->url_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void EndpointAdd_Request__finalize(
                EndpointAdd_Request_* sample)
            {

                mavros_msgs::srv::dds_::EndpointAdd_Request__finalize_ex(sample,RTI_TRUE);
            }

            void EndpointAdd_Request__finalize_ex(
                EndpointAdd_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::EndpointAdd_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void EndpointAdd_Request__finalize_w_params(
                EndpointAdd_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->url_ != NULL) {
                    DDS_String_free(sample->url_);
                    sample->url_=NULL;

                }

            }

            void EndpointAdd_Request__finalize_optional_members(
                EndpointAdd_Request_* sample, RTIBool deletePointers)
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

            RTIBool EndpointAdd_Request__copy(
                EndpointAdd_Request_* dst,
                const EndpointAdd_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->url_, src->url_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
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
            * Configure and implement 'EndpointAdd_Request_' sequence class.
            */
            #define T EndpointAdd_Request_
            #define TSeq EndpointAdd_Request_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::EndpointAdd_Request__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::EndpointAdd_Request__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::EndpointAdd_Request__copy

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
            const char *EndpointAdd_Response_TYPENAME = "mavros_msgs::srv::dds_::EndpointAdd_Response_";

            DDS_TypeCode* EndpointAdd_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode EndpointAdd_Response__g_tc_reason__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member EndpointAdd_Response__g_tc_members[3]=
                {

                    {
                        (char *)"successful_",/* Member name */
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
                        (char *)"reason_",/* Member name */
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
                    }, 
                    {
                        (char *)"id_",/* Member name */
                        {
                            2,/* Representation ID */          
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

                static DDS_TypeCode EndpointAdd_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::EndpointAdd_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        EndpointAdd_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for EndpointAdd_Response_*/

                if (is_initialized) {
                    return &EndpointAdd_Response__g_tc;
                }

                EndpointAdd_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                EndpointAdd_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&EndpointAdd_Response__g_tc_reason__string;

                EndpointAdd_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                is_initialized = RTI_TRUE;

                return &EndpointAdd_Response__g_tc;
            }

            RTIBool EndpointAdd_Response__initialize(
                EndpointAdd_Response_* sample) {
                return mavros_msgs::srv::dds_::EndpointAdd_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool EndpointAdd_Response__initialize_ex(
                EndpointAdd_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::EndpointAdd_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool EndpointAdd_Response__initialize_w_params(
                EndpointAdd_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->successful_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->reason_= DDS_String_alloc ((0));
                    if (sample->reason_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->reason_!= NULL) { 
                        sample->reason_[0] = '\0';
                    }
                }

                if (!RTICdrType_initUnsignedLong(&sample->id_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void EndpointAdd_Response__finalize(
                EndpointAdd_Response_* sample)
            {

                mavros_msgs::srv::dds_::EndpointAdd_Response__finalize_ex(sample,RTI_TRUE);
            }

            void EndpointAdd_Response__finalize_ex(
                EndpointAdd_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::EndpointAdd_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void EndpointAdd_Response__finalize_w_params(
                EndpointAdd_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->reason_ != NULL) {
                    DDS_String_free(sample->reason_);
                    sample->reason_=NULL;

                }

            }

            void EndpointAdd_Response__finalize_optional_members(
                EndpointAdd_Response_* sample, RTIBool deletePointers)
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

            RTIBool EndpointAdd_Response__copy(
                EndpointAdd_Response_* dst,
                const EndpointAdd_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->successful_, &src->successful_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->reason_, src->reason_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->id_, &src->id_)) { 
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
            * Configure and implement 'EndpointAdd_Response_' sequence class.
            */
            #define T EndpointAdd_Response_
            #define TSeq EndpointAdd_Response_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::EndpointAdd_Response__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::EndpointAdd_Response__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::EndpointAdd_Response__copy

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

