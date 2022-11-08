

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointClear_.idl using "rtiddsgen".
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

#include "WaypointClear_.h"

#include <new>

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *WaypointClear_Request_TYPENAME = "mavros_msgs::srv::dds_::WaypointClear_Request_";

            DDS_TypeCode* WaypointClear_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaypointClear_Request__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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

                static DDS_TypeCode WaypointClear_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::WaypointClear_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        WaypointClear_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for WaypointClear_Request_*/

                if (is_initialized) {
                    return &WaypointClear_Request__g_tc;
                }

                WaypointClear_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &WaypointClear_Request__g_tc;
            }

            RTIBool WaypointClear_Request__initialize(
                WaypointClear_Request_* sample) {
                return mavros_msgs::srv::dds_::WaypointClear_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WaypointClear_Request__initialize_ex(
                WaypointClear_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::WaypointClear_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WaypointClear_Request__initialize_w_params(
                WaypointClear_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void WaypointClear_Request__finalize(
                WaypointClear_Request_* sample)
            {

                mavros_msgs::srv::dds_::WaypointClear_Request__finalize_ex(sample,RTI_TRUE);
            }

            void WaypointClear_Request__finalize_ex(
                WaypointClear_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::WaypointClear_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void WaypointClear_Request__finalize_w_params(
                WaypointClear_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void WaypointClear_Request__finalize_optional_members(
                WaypointClear_Request_* sample, RTIBool deletePointers)
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

            RTIBool WaypointClear_Request__copy(
                WaypointClear_Request_* dst,
                const WaypointClear_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'WaypointClear_Request_' sequence class.
            */
            #define T WaypointClear_Request_
            #define TSeq WaypointClear_Request_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::WaypointClear_Request__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::WaypointClear_Request__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::WaypointClear_Request__copy

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
            const char *WaypointClear_Response_TYPENAME = "mavros_msgs::srv::dds_::WaypointClear_Response_";

            DDS_TypeCode* WaypointClear_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaypointClear_Response__g_tc_members[1]=
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
                    }
                };

                static DDS_TypeCode WaypointClear_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::WaypointClear_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        WaypointClear_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for WaypointClear_Response_*/

                if (is_initialized) {
                    return &WaypointClear_Response__g_tc;
                }

                WaypointClear_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &WaypointClear_Response__g_tc;
            }

            RTIBool WaypointClear_Response__initialize(
                WaypointClear_Response_* sample) {
                return mavros_msgs::srv::dds_::WaypointClear_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WaypointClear_Response__initialize_ex(
                WaypointClear_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::WaypointClear_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WaypointClear_Response__initialize_w_params(
                WaypointClear_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                return RTI_TRUE;
            }

            void WaypointClear_Response__finalize(
                WaypointClear_Response_* sample)
            {

                mavros_msgs::srv::dds_::WaypointClear_Response__finalize_ex(sample,RTI_TRUE);
            }

            void WaypointClear_Response__finalize_ex(
                WaypointClear_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::WaypointClear_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void WaypointClear_Response__finalize_w_params(
                WaypointClear_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void WaypointClear_Response__finalize_optional_members(
                WaypointClear_Response_* sample, RTIBool deletePointers)
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

            RTIBool WaypointClear_Response__copy(
                WaypointClear_Response_* dst,
                const WaypointClear_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
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
            * Configure and implement 'WaypointClear_Response_' sequence class.
            */
            #define T WaypointClear_Response_
            #define TSeq WaypointClear_Response_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::WaypointClear_Response__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::WaypointClear_Response__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::WaypointClear_Response__copy

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

