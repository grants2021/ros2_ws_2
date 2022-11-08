

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory_.idl using "rtiddsgen".
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

#include "Trajectory_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace Trajectory_Constants {
            } /* namespace Trajectory_Constants  */

            /* ========================================================================= */
            const char *Trajectory_TYPENAME = "mavros_msgs::msg::dds_::Trajectory_";

            DDS_TypeCode* Trajectory__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Trajectory__g_tc_point_valid__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,5, NULL,NULL);
                static DDS_TypeCode Trajectory__g_tc_command__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,5, NULL,NULL);
                static DDS_TypeCode Trajectory__g_tc_time_horizon__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,5, NULL,NULL);
                static DDS_TypeCode_Member Trajectory__g_tc_members[10]=
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
                    }, 
                    {
                        (char *)"point_1_",/* Member name */
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
                        (char *)"point_2_",/* Member name */
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
                        (char *)"point_3_",/* Member name */
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
                        (char *)"point_4_",/* Member name */
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
                        (char *)"point_5_",/* Member name */
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
                        (char *)"point_valid_",/* Member name */
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
                        (char *)"command_",/* Member name */
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
                    }, 
                    {
                        (char *)"time_horizon_",/* Member name */
                        {
                            9,/* Representation ID */          
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

                static DDS_TypeCode Trajectory__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::Trajectory_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        Trajectory__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Trajectory_*/

                if (is_initialized) {
                    return &Trajectory__g_tc;
                }

                Trajectory__g_tc_point_valid__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Trajectory__g_tc_command__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                Trajectory__g_tc_time_horizon__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;

                Trajectory__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Trajectory__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Trajectory__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::PositionTarget__get_typecode();

                Trajectory__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::PositionTarget__get_typecode();

                Trajectory__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::PositionTarget__get_typecode();

                Trajectory__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::PositionTarget__get_typecode();

                Trajectory__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::PositionTarget__get_typecode();

                Trajectory__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& Trajectory__g_tc_point_valid__array;
                Trajectory__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& Trajectory__g_tc_command__array;
                Trajectory__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& Trajectory__g_tc_time_horizon__array;

                is_initialized = RTI_TRUE;

                return &Trajectory__g_tc;
            }

            RTIBool Trajectory__initialize(
                Trajectory_* sample) {
                return mavros_msgs::msg::dds_::Trajectory__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Trajectory__initialize_ex(
                Trajectory_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::Trajectory__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Trajectory__initialize_w_params(
                Trajectory_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (!mavros_msgs::msg::dds_::PositionTarget__initialize_w_params(&sample->point_1_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!mavros_msgs::msg::dds_::PositionTarget__initialize_w_params(&sample->point_2_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!mavros_msgs::msg::dds_::PositionTarget__initialize_w_params(&sample->point_3_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!mavros_msgs::msg::dds_::PositionTarget__initialize_w_params(&sample->point_4_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!mavros_msgs::msg::dds_::PositionTarget__initialize_w_params(&sample->point_5_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->point_valid_, (5), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->command_, (5), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->time_horizon_, (5), RTI_CDR_FLOAT_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Trajectory__finalize(
                Trajectory_* sample)
            {

                mavros_msgs::msg::dds_::Trajectory__finalize_ex(sample,RTI_TRUE);
            }

            void Trajectory__finalize_ex(
                Trajectory_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::Trajectory__finalize_w_params(
                    sample,&deallocParams);
            }

            void Trajectory__finalize_w_params(
                Trajectory_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                mavros_msgs::msg::dds_::PositionTarget__finalize_w_params(&sample->point_1_,deallocParams);

                mavros_msgs::msg::dds_::PositionTarget__finalize_w_params(&sample->point_2_,deallocParams);

                mavros_msgs::msg::dds_::PositionTarget__finalize_w_params(&sample->point_3_,deallocParams);

                mavros_msgs::msg::dds_::PositionTarget__finalize_w_params(&sample->point_4_,deallocParams);

                mavros_msgs::msg::dds_::PositionTarget__finalize_w_params(&sample->point_5_,deallocParams);

            }

            void Trajectory__finalize_optional_members(
                Trajectory_* sample, RTIBool deletePointers)
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
                mavros_msgs::msg::dds_::PositionTarget__finalize_optional_members(&sample->point_1_, deallocParams->delete_pointers);
                mavros_msgs::msg::dds_::PositionTarget__finalize_optional_members(&sample->point_2_, deallocParams->delete_pointers);
                mavros_msgs::msg::dds_::PositionTarget__finalize_optional_members(&sample->point_3_, deallocParams->delete_pointers);
                mavros_msgs::msg::dds_::PositionTarget__finalize_optional_members(&sample->point_4_, deallocParams->delete_pointers);
                mavros_msgs::msg::dds_::PositionTarget__finalize_optional_members(&sample->point_5_, deallocParams->delete_pointers);
            }

            RTIBool Trajectory__copy(
                Trajectory_* dst,
                const Trajectory_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!mavros_msgs::msg::dds_::PositionTarget__copy(
                        &dst->point_1_,(const mavros_msgs::msg::dds_::PositionTarget_*)&src->point_1_)) {
                        return RTI_FALSE;
                    } 
                    if (!mavros_msgs::msg::dds_::PositionTarget__copy(
                        &dst->point_2_,(const mavros_msgs::msg::dds_::PositionTarget_*)&src->point_2_)) {
                        return RTI_FALSE;
                    } 
                    if (!mavros_msgs::msg::dds_::PositionTarget__copy(
                        &dst->point_3_,(const mavros_msgs::msg::dds_::PositionTarget_*)&src->point_3_)) {
                        return RTI_FALSE;
                    } 
                    if (!mavros_msgs::msg::dds_::PositionTarget__copy(
                        &dst->point_4_,(const mavros_msgs::msg::dds_::PositionTarget_*)&src->point_4_)) {
                        return RTI_FALSE;
                    } 
                    if (!mavros_msgs::msg::dds_::PositionTarget__copy(
                        &dst->point_5_,(const mavros_msgs::msg::dds_::PositionTarget_*)&src->point_5_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyArray(
                        dst->point_valid_ ,src->point_valid_,(5), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->command_ ,src->command_,(5), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->time_horizon_ ,src->time_horizon_,(5), RTI_CDR_FLOAT_SIZE)) {
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
            * Configure and implement 'Trajectory_' sequence class.
            */
            #define T Trajectory_
            #define TSeq Trajectory_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::Trajectory__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::Trajectory__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::Trajectory__copy

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

