

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OverrideRCIn_.idl using "rtiddsgen".
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

#include "OverrideRCIn_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace OverrideRCIn_Constants {
            } /* namespace OverrideRCIn_Constants  */

            /* ========================================================================= */
            const char *OverrideRCIn_TYPENAME = "mavros_msgs::msg::dds_::OverrideRCIn_";

            DDS_TypeCode* OverrideRCIn__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode OverrideRCIn__g_tc_channels__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,18, NULL,NULL);
                static DDS_TypeCode_Member OverrideRCIn__g_tc_members[1]=
                {

                    {
                        (char *)"channels_",/* Member name */
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

                static DDS_TypeCode OverrideRCIn__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::OverrideRCIn_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        OverrideRCIn__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for OverrideRCIn_*/

                if (is_initialized) {
                    return &OverrideRCIn__g_tc;
                }

                OverrideRCIn__g_tc_channels__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                OverrideRCIn__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& OverrideRCIn__g_tc_channels__array;

                is_initialized = RTI_TRUE;

                return &OverrideRCIn__g_tc;
            }

            RTIBool OverrideRCIn__initialize(
                OverrideRCIn_* sample) {
                return mavros_msgs::msg::dds_::OverrideRCIn__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool OverrideRCIn__initialize_ex(
                OverrideRCIn_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::OverrideRCIn__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool OverrideRCIn__initialize_w_params(
                OverrideRCIn_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->channels_, (18), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void OverrideRCIn__finalize(
                OverrideRCIn_* sample)
            {

                mavros_msgs::msg::dds_::OverrideRCIn__finalize_ex(sample,RTI_TRUE);
            }

            void OverrideRCIn__finalize_ex(
                OverrideRCIn_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::OverrideRCIn__finalize_w_params(
                    sample,&deallocParams);
            }

            void OverrideRCIn__finalize_w_params(
                OverrideRCIn_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void OverrideRCIn__finalize_optional_members(
                OverrideRCIn_* sample, RTIBool deletePointers)
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

            RTIBool OverrideRCIn__copy(
                OverrideRCIn_* dst,
                const OverrideRCIn_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        dst->channels_ ,src->channels_,(18), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
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
            * Configure and implement 'OverrideRCIn_' sequence class.
            */
            #define T OverrideRCIn_
            #define TSeq OverrideRCIn_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::OverrideRCIn__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::OverrideRCIn__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::OverrideRCIn__copy

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

