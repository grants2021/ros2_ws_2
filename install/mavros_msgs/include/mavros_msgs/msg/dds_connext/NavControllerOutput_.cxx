

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavControllerOutput_.idl using "rtiddsgen".
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

#include "NavControllerOutput_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *NavControllerOutput_TYPENAME = "mavros_msgs::msg::dds_::NavControllerOutput_";

            DDS_TypeCode* NavControllerOutput__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NavControllerOutput__g_tc_members[9]=
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
                        (char *)"nav_roll_",/* Member name */
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
                        (char *)"nav_pitch_",/* Member name */
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
                    }, 
                    {
                        (char *)"nav_bearing_",/* Member name */
                        {
                            3,/* Representation ID */          
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
                        (char *)"target_bearing_",/* Member name */
                        {
                            4,/* Representation ID */          
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
                        (char *)"wp_dist_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"alt_error_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"aspd_error_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"xtrack_error_",/* Member name */
                        {
                            8,/* Representation ID */          
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

                static DDS_TypeCode NavControllerOutput__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::NavControllerOutput_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        NavControllerOutput__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NavControllerOutput_*/

                if (is_initialized) {
                    return &NavControllerOutput__g_tc;
                }

                NavControllerOutput__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                NavControllerOutput__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NavControllerOutput__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NavControllerOutput__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                NavControllerOutput__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                NavControllerOutput__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                NavControllerOutput__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NavControllerOutput__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NavControllerOutput__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &NavControllerOutput__g_tc;
            }

            RTIBool NavControllerOutput__initialize(
                NavControllerOutput_* sample) {
                return mavros_msgs::msg::dds_::NavControllerOutput__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NavControllerOutput__initialize_ex(
                NavControllerOutput_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::NavControllerOutput__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NavControllerOutput__initialize_w_params(
                NavControllerOutput_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

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

                if (!RTICdrType_initFloat(&sample->nav_roll_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->nav_pitch_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initShort(&sample->nav_bearing_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initShort(&sample->target_bearing_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedShort(&sample->wp_dist_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->alt_error_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->aspd_error_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->xtrack_error_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void NavControllerOutput__finalize(
                NavControllerOutput_* sample)
            {

                mavros_msgs::msg::dds_::NavControllerOutput__finalize_ex(sample,RTI_TRUE);
            }

            void NavControllerOutput__finalize_ex(
                NavControllerOutput_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::NavControllerOutput__finalize_w_params(
                    sample,&deallocParams);
            }

            void NavControllerOutput__finalize_w_params(
                NavControllerOutput_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

            }

            void NavControllerOutput__finalize_optional_members(
                NavControllerOutput_* sample, RTIBool deletePointers)
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
            }

            RTIBool NavControllerOutput__copy(
                NavControllerOutput_* dst,
                const NavControllerOutput_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->nav_roll_, &src->nav_roll_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->nav_pitch_, &src->nav_pitch_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyShort (
                        &dst->nav_bearing_, &src->nav_bearing_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyShort (
                        &dst->target_bearing_, &src->target_bearing_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedShort (
                        &dst->wp_dist_, &src->wp_dist_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->alt_error_, &src->alt_error_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->aspd_error_, &src->aspd_error_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->xtrack_error_, &src->xtrack_error_)) { 
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
            * Configure and implement 'NavControllerOutput_' sequence class.
            */
            #define T NavControllerOutput_
            #define TSeq NavControllerOutput_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::NavControllerOutput__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::NavControllerOutput__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::NavControllerOutput__copy

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

