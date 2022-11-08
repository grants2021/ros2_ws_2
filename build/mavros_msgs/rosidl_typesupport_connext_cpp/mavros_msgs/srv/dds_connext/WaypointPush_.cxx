

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointPush_.idl using "rtiddsgen".
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

#include "WaypointPush_.h"

#include <new>

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *WaypointPush_Request_TYPENAME = "mavros_msgs::srv::dds_::WaypointPush_Request_";

            DDS_TypeCode* WaypointPush_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WaypointPush_Request__g_tc_waypoints__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member WaypointPush_Request__g_tc_members[2]=
                {

                    {
                        (char *)"start_index_",/* Member name */
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
                        (char *)"waypoints_",/* Member name */
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

                static DDS_TypeCode WaypointPush_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::WaypointPush_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WaypointPush_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for WaypointPush_Request_*/

                if (is_initialized) {
                    return &WaypointPush_Request__g_tc;
                }

                WaypointPush_Request__g_tc_waypoints__sequence._data._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::Waypoint__get_typecode();

                WaypointPush_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                WaypointPush_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& WaypointPush_Request__g_tc_waypoints__sequence;

                is_initialized = RTI_TRUE;

                return &WaypointPush_Request__g_tc;
            }

            RTIBool WaypointPush_Request__initialize(
                WaypointPush_Request_* sample) {
                return mavros_msgs::srv::dds_::WaypointPush_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WaypointPush_Request__initialize_ex(
                WaypointPush_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::WaypointPush_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WaypointPush_Request__initialize_w_params(
                WaypointPush_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedShort(&sample->start_index_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    mavros_msgs::msg::dds_::Waypoint_Seq_initialize(&sample->waypoints_ );
                    mavros_msgs::msg::dds_::Waypoint_Seq_set_element_allocation_params(&sample->waypoints_ ,allocParams);
                    mavros_msgs::msg::dds_::Waypoint_Seq_set_absolute_maximum(&sample->waypoints_ , RTI_INT32_MAX);
                    if (!mavros_msgs::msg::dds_::Waypoint_Seq_set_maximum(&sample->waypoints_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    mavros_msgs::msg::dds_::Waypoint_Seq_set_length(&sample->waypoints_, 0);
                }
                return RTI_TRUE;
            }

            void WaypointPush_Request__finalize(
                WaypointPush_Request_* sample)
            {

                mavros_msgs::srv::dds_::WaypointPush_Request__finalize_ex(sample,RTI_TRUE);
            }

            void WaypointPush_Request__finalize_ex(
                WaypointPush_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::WaypointPush_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void WaypointPush_Request__finalize_w_params(
                WaypointPush_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                mavros_msgs::msg::dds_::Waypoint_Seq_set_element_deallocation_params(
                    &sample->waypoints_,deallocParams);
                mavros_msgs::msg::dds_::Waypoint_Seq_finalize(&sample->waypoints_);

            }

            void WaypointPush_Request__finalize_optional_members(
                WaypointPush_Request_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = mavros_msgs::msg::dds_::Waypoint_Seq_get_length(
                        &sample->waypoints_);

                    for (i = 0; i < length; i++) {
                        mavros_msgs::msg::dds_::Waypoint__finalize_optional_members(
                            mavros_msgs::msg::dds_::Waypoint_Seq_get_reference(
                                &sample->waypoints_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool WaypointPush_Request__copy(
                WaypointPush_Request_* dst,
                const WaypointPush_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedShort (
                        &dst->start_index_, &src->start_index_)) { 
                        return RTI_FALSE;
                    }
                    if (!mavros_msgs::msg::dds_::Waypoint_Seq_copy(&dst->waypoints_ ,
                    &src->waypoints_ )) {
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
            * Configure and implement 'WaypointPush_Request_' sequence class.
            */
            #define T WaypointPush_Request_
            #define TSeq WaypointPush_Request_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::WaypointPush_Request__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::WaypointPush_Request__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::WaypointPush_Request__copy

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
            const char *WaypointPush_Response_TYPENAME = "mavros_msgs::srv::dds_::WaypointPush_Response_";

            DDS_TypeCode* WaypointPush_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WaypointPush_Response__g_tc_members[2]=
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
                        (char *)"wp_transfered_",/* Member name */
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

                static DDS_TypeCode WaypointPush_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::WaypointPush_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WaypointPush_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for WaypointPush_Response_*/

                if (is_initialized) {
                    return &WaypointPush_Response__g_tc;
                }

                WaypointPush_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                WaypointPush_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                is_initialized = RTI_TRUE;

                return &WaypointPush_Response__g_tc;
            }

            RTIBool WaypointPush_Response__initialize(
                WaypointPush_Response_* sample) {
                return mavros_msgs::srv::dds_::WaypointPush_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WaypointPush_Response__initialize_ex(
                WaypointPush_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::WaypointPush_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WaypointPush_Response__initialize_w_params(
                WaypointPush_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initUnsignedLong(&sample->wp_transfered_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void WaypointPush_Response__finalize(
                WaypointPush_Response_* sample)
            {

                mavros_msgs::srv::dds_::WaypointPush_Response__finalize_ex(sample,RTI_TRUE);
            }

            void WaypointPush_Response__finalize_ex(
                WaypointPush_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::WaypointPush_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void WaypointPush_Response__finalize_w_params(
                WaypointPush_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void WaypointPush_Response__finalize_optional_members(
                WaypointPush_Response_* sample, RTIBool deletePointers)
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

            RTIBool WaypointPush_Response__copy(
                WaypointPush_Response_* dst,
                const WaypointPush_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->wp_transfered_, &src->wp_transfered_)) { 
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
            * Configure and implement 'WaypointPush_Response_' sequence class.
            */
            #define T WaypointPush_Response_
            #define TSeq WaypointPush_Response_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::WaypointPush_Response__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::WaypointPush_Response__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::WaypointPush_Response__copy

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

