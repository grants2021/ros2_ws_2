

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCStatus_.idl using "rtiddsgen".
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

#include "ESCStatus_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ESCStatus_TYPENAME = "mavros_msgs::msg::dds_::ESCStatus_";

            DDS_TypeCode* ESCStatus__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ESCStatus__g_tc_esc_status__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ESCStatus__g_tc_members[2]=
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
                        (char *)"esc_status_",/* Member name */
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

                static DDS_TypeCode ESCStatus__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::ESCStatus_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ESCStatus__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ESCStatus_*/

                if (is_initialized) {
                    return &ESCStatus__g_tc;
                }

                ESCStatus__g_tc_esc_status__sequence._data._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::ESCStatusItem__get_typecode();

                ESCStatus__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                ESCStatus__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ESCStatus__g_tc_esc_status__sequence;

                is_initialized = RTI_TRUE;

                return &ESCStatus__g_tc;
            }

            RTIBool ESCStatus__initialize(
                ESCStatus_* sample) {
                return mavros_msgs::msg::dds_::ESCStatus__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ESCStatus__initialize_ex(
                ESCStatus_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::ESCStatus__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ESCStatus__initialize_w_params(
                ESCStatus_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    mavros_msgs::msg::dds_::ESCStatusItem_Seq_initialize(&sample->esc_status_ );
                    mavros_msgs::msg::dds_::ESCStatusItem_Seq_set_element_allocation_params(&sample->esc_status_ ,allocParams);
                    mavros_msgs::msg::dds_::ESCStatusItem_Seq_set_absolute_maximum(&sample->esc_status_ , RTI_INT32_MAX);
                    if (!mavros_msgs::msg::dds_::ESCStatusItem_Seq_set_maximum(&sample->esc_status_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    mavros_msgs::msg::dds_::ESCStatusItem_Seq_set_length(&sample->esc_status_, 0);
                }
                return RTI_TRUE;
            }

            void ESCStatus__finalize(
                ESCStatus_* sample)
            {

                mavros_msgs::msg::dds_::ESCStatus__finalize_ex(sample,RTI_TRUE);
            }

            void ESCStatus__finalize_ex(
                ESCStatus_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::ESCStatus__finalize_w_params(
                    sample,&deallocParams);
            }

            void ESCStatus__finalize_w_params(
                ESCStatus_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                mavros_msgs::msg::dds_::ESCStatusItem_Seq_set_element_deallocation_params(
                    &sample->esc_status_,deallocParams);
                mavros_msgs::msg::dds_::ESCStatusItem_Seq_finalize(&sample->esc_status_);

            }

            void ESCStatus__finalize_optional_members(
                ESCStatus_* sample, RTIBool deletePointers)
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
                    length = mavros_msgs::msg::dds_::ESCStatusItem_Seq_get_length(
                        &sample->esc_status_);

                    for (i = 0; i < length; i++) {
                        mavros_msgs::msg::dds_::ESCStatusItem__finalize_optional_members(
                            mavros_msgs::msg::dds_::ESCStatusItem_Seq_get_reference(
                                &sample->esc_status_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ESCStatus__copy(
                ESCStatus_* dst,
                const ESCStatus_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!mavros_msgs::msg::dds_::ESCStatusItem_Seq_copy(&dst->esc_status_ ,
                    &src->esc_status_ )) {
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
            * Configure and implement 'ESCStatus_' sequence class.
            */
            #define T ESCStatus_
            #define TSeq ESCStatus_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::ESCStatus__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::ESCStatus__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::ESCStatus__copy

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

