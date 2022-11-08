

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ColorSequence_.idl using "rtiddsgen".
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

#include "ColorSequence_.h"

#include <new>

namespace vrx_gazebo {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ColorSequence_Request_TYPENAME = "vrx_gazebo::srv::dds_::ColorSequence_Request_";

            DDS_TypeCode* ColorSequence_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ColorSequence_Request__g_tc_color1__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ColorSequence_Request__g_tc_color2__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ColorSequence_Request__g_tc_color3__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member ColorSequence_Request__g_tc_members[3]=
                {

                    {
                        (char *)"color1_",/* Member name */
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
                        (char *)"color2_",/* Member name */
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
                        (char *)"color3_",/* Member name */
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

                static DDS_TypeCode ColorSequence_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"vrx_gazebo::srv::dds_::ColorSequence_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ColorSequence_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ColorSequence_Request_*/

                if (is_initialized) {
                    return &ColorSequence_Request__g_tc;
                }

                ColorSequence_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ColorSequence_Request__g_tc_color1__string;

                ColorSequence_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ColorSequence_Request__g_tc_color2__string;

                ColorSequence_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&ColorSequence_Request__g_tc_color3__string;

                is_initialized = RTI_TRUE;

                return &ColorSequence_Request__g_tc;
            }

            RTIBool ColorSequence_Request__initialize(
                ColorSequence_Request_* sample) {
                return vrx_gazebo::srv::dds_::ColorSequence_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ColorSequence_Request__initialize_ex(
                ColorSequence_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return vrx_gazebo::srv::dds_::ColorSequence_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ColorSequence_Request__initialize_w_params(
                ColorSequence_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->color1_= DDS_String_alloc ((0));
                    if (sample->color1_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->color1_!= NULL) { 
                        sample->color1_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->color2_= DDS_String_alloc ((0));
                    if (sample->color2_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->color2_!= NULL) { 
                        sample->color2_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->color3_= DDS_String_alloc ((0));
                    if (sample->color3_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->color3_!= NULL) { 
                        sample->color3_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void ColorSequence_Request__finalize(
                ColorSequence_Request_* sample)
            {

                vrx_gazebo::srv::dds_::ColorSequence_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ColorSequence_Request__finalize_ex(
                ColorSequence_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                vrx_gazebo::srv::dds_::ColorSequence_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ColorSequence_Request__finalize_w_params(
                ColorSequence_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->color1_ != NULL) {
                    DDS_String_free(sample->color1_);
                    sample->color1_=NULL;

                }
                if (sample->color2_ != NULL) {
                    DDS_String_free(sample->color2_);
                    sample->color2_=NULL;

                }
                if (sample->color3_ != NULL) {
                    DDS_String_free(sample->color3_);
                    sample->color3_=NULL;

                }
            }

            void ColorSequence_Request__finalize_optional_members(
                ColorSequence_Request_* sample, RTIBool deletePointers)
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

            RTIBool ColorSequence_Request__copy(
                ColorSequence_Request_* dst,
                const ColorSequence_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->color1_, src->color1_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->color2_, src->color2_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->color3_, src->color3_, 
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
            * Configure and implement 'ColorSequence_Request_' sequence class.
            */
            #define T ColorSequence_Request_
            #define TSeq ColorSequence_Request_Seq

            #define T_initialize_w_params vrx_gazebo::srv::dds_::ColorSequence_Request__initialize_w_params

            #define T_finalize_w_params   vrx_gazebo::srv::dds_::ColorSequence_Request__finalize_w_params
            #define T_copy       vrx_gazebo::srv::dds_::ColorSequence_Request__copy

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
} /* namespace vrx_gazebo  */
namespace vrx_gazebo {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ColorSequence_Response_TYPENAME = "vrx_gazebo::srv::dds_::ColorSequence_Response_";

            DDS_TypeCode* ColorSequence_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ColorSequence_Response__g_tc_members[1]=
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

                static DDS_TypeCode ColorSequence_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"vrx_gazebo::srv::dds_::ColorSequence_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ColorSequence_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ColorSequence_Response_*/

                if (is_initialized) {
                    return &ColorSequence_Response__g_tc;
                }

                ColorSequence_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &ColorSequence_Response__g_tc;
            }

            RTIBool ColorSequence_Response__initialize(
                ColorSequence_Response_* sample) {
                return vrx_gazebo::srv::dds_::ColorSequence_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ColorSequence_Response__initialize_ex(
                ColorSequence_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return vrx_gazebo::srv::dds_::ColorSequence_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ColorSequence_Response__initialize_w_params(
                ColorSequence_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void ColorSequence_Response__finalize(
                ColorSequence_Response_* sample)
            {

                vrx_gazebo::srv::dds_::ColorSequence_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ColorSequence_Response__finalize_ex(
                ColorSequence_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                vrx_gazebo::srv::dds_::ColorSequence_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ColorSequence_Response__finalize_w_params(
                ColorSequence_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void ColorSequence_Response__finalize_optional_members(
                ColorSequence_Response_* sample, RTIBool deletePointers)
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

            RTIBool ColorSequence_Response__copy(
                ColorSequence_Response_* dst,
                const ColorSequence_Response_* src)
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
            * Configure and implement 'ColorSequence_Response_' sequence class.
            */
            #define T ColorSequence_Response_
            #define TSeq ColorSequence_Response_Seq

            #define T_initialize_w_params vrx_gazebo::srv::dds_::ColorSequence_Response__initialize_w_params

            #define T_finalize_w_params   vrx_gazebo::srv::dds_::ColorSequence_Response__finalize_w_params
            #define T_copy       vrx_gazebo::srv::dds_::ColorSequence_Response__copy

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
} /* namespace vrx_gazebo  */

