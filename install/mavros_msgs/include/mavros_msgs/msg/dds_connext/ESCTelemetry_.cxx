

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCTelemetry_.idl using "rtiddsgen".
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

#include "ESCTelemetry_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ESCTelemetry_TYPENAME = "mavros_msgs::msg::dds_::ESCTelemetry_";

            DDS_TypeCode* ESCTelemetry__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ESCTelemetry__g_tc_esc_telemetry__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ESCTelemetry__g_tc_members[2]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"esc_telemetry_",/* Member name */
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

                static DDS_TypeCode ESCTelemetry__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::ESCTelemetry_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ESCTelemetry__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ESCTelemetry_*/

                if (is_initialized) {
                    return &ESCTelemetry__g_tc;
                }

                ESCTelemetry__g_tc_esc_telemetry__sequence._data._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::ESCTelemetryItem__get_typecode();

                ESCTelemetry__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                ESCTelemetry__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ESCTelemetry__g_tc_esc_telemetry__sequence;

                is_initialized = RTI_TRUE;

                return &ESCTelemetry__g_tc;
            }

            RTIBool ESCTelemetry__initialize(
                ESCTelemetry_* sample) {
                return mavros_msgs::msg::dds_::ESCTelemetry__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ESCTelemetry__initialize_ex(
                ESCTelemetry_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::ESCTelemetry__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ESCTelemetry__initialize_w_params(
                ESCTelemetry_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_initialize(&sample->esc_telemetry_ );
                    mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_set_element_allocation_params(&sample->esc_telemetry_ ,allocParams);
                    mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_set_absolute_maximum(&sample->esc_telemetry_ , RTI_INT32_MAX);
                    if (!mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_set_maximum(&sample->esc_telemetry_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_set_length(&sample->esc_telemetry_, 0);
                }
                return RTI_TRUE;
            }

            void ESCTelemetry__finalize(
                ESCTelemetry_* sample)
            {

                mavros_msgs::msg::dds_::ESCTelemetry__finalize_ex(sample,RTI_TRUE);
            }

            void ESCTelemetry__finalize_ex(
                ESCTelemetry_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::ESCTelemetry__finalize_w_params(
                    sample,&deallocParams);
            }

            void ESCTelemetry__finalize_w_params(
                ESCTelemetry_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_set_element_deallocation_params(
                    &sample->esc_telemetry_,deallocParams);
                mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_finalize(&sample->esc_telemetry_);

            }

            void ESCTelemetry__finalize_optional_members(
                ESCTelemetry_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_get_length(
                        &sample->esc_telemetry_);

                    for (i = 0; i < length; i++) {
                        mavros_msgs::msg::dds_::ESCTelemetryItem__finalize_optional_members(
                            mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_get_reference(
                                &sample->esc_telemetry_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ESCTelemetry__copy(
                ESCTelemetry_* dst,
                const ESCTelemetry_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!mavros_msgs::msg::dds_::ESCTelemetryItem_Seq_copy(&dst->esc_telemetry_ ,
                    &src->esc_telemetry_ )) {
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
            * Configure and implement 'ESCTelemetry_' sequence class.
            */
            #define T ESCTelemetry_
            #define TSeq ESCTelemetry_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::ESCTelemetry__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::ESCTelemetry__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::ESCTelemetry__copy

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

