

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointList_.idl using "rtiddsgen".
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

#include "WaypointList_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *WaypointList_TYPENAME = "mavros_msgs::msg::dds_::WaypointList_";

            DDS_TypeCode* WaypointList__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WaypointList__g_tc_waypoints__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member WaypointList__g_tc_members[2]=
                {

                    {
                        (char *)"current_seq_",/* Member name */
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

                static DDS_TypeCode WaypointList__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::WaypointList_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        WaypointList__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for WaypointList_*/

                if (is_initialized) {
                    return &WaypointList__g_tc;
                }

                WaypointList__g_tc_waypoints__sequence._data._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::Waypoint__get_typecode();

                WaypointList__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                WaypointList__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& WaypointList__g_tc_waypoints__sequence;

                is_initialized = RTI_TRUE;

                return &WaypointList__g_tc;
            }

            RTIBool WaypointList__initialize(
                WaypointList_* sample) {
                return mavros_msgs::msg::dds_::WaypointList__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WaypointList__initialize_ex(
                WaypointList_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::WaypointList__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WaypointList__initialize_w_params(
                WaypointList_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedShort(&sample->current_seq_)) {
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

            void WaypointList__finalize(
                WaypointList_* sample)
            {

                mavros_msgs::msg::dds_::WaypointList__finalize_ex(sample,RTI_TRUE);
            }

            void WaypointList__finalize_ex(
                WaypointList_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::WaypointList__finalize_w_params(
                    sample,&deallocParams);
            }

            void WaypointList__finalize_w_params(
                WaypointList_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void WaypointList__finalize_optional_members(
                WaypointList_* sample, RTIBool deletePointers)
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

            RTIBool WaypointList__copy(
                WaypointList_* dst,
                const WaypointList_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyUnsignedShort (
                        &dst->current_seq_, &src->current_seq_)) { 
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
            * Configure and implement 'WaypointList_' sequence class.
            */
            #define T WaypointList_
            #define TSeq WaypointList_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::WaypointList__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::WaypointList__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::WaypointList__copy

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
    } /* namespace msg  */
} /* namespace mavros_msgs  */

