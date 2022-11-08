

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileList_.idl using "rtiddsgen".
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

#include "FileList_.h"

#include <new>

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *FileList_Request_TYPENAME = "mavros_msgs::srv::dds_::FileList_Request_";

            DDS_TypeCode* FileList_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FileList_Request__g_tc_dir_path__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member FileList_Request__g_tc_members[1]=
                {

                    {
                        (char *)"dir_path_",/* Member name */
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

                static DDS_TypeCode FileList_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::FileList_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FileList_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FileList_Request_*/

                if (is_initialized) {
                    return &FileList_Request__g_tc;
                }

                FileList_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&FileList_Request__g_tc_dir_path__string;

                is_initialized = RTI_TRUE;

                return &FileList_Request__g_tc;
            }

            RTIBool FileList_Request__initialize(
                FileList_Request_* sample) {
                return mavros_msgs::srv::dds_::FileList_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FileList_Request__initialize_ex(
                FileList_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::FileList_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FileList_Request__initialize_w_params(
                FileList_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->dir_path_= DDS_String_alloc ((0));
                    if (sample->dir_path_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->dir_path_!= NULL) { 
                        sample->dir_path_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void FileList_Request__finalize(
                FileList_Request_* sample)
            {

                mavros_msgs::srv::dds_::FileList_Request__finalize_ex(sample,RTI_TRUE);
            }

            void FileList_Request__finalize_ex(
                FileList_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::FileList_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void FileList_Request__finalize_w_params(
                FileList_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->dir_path_ != NULL) {
                    DDS_String_free(sample->dir_path_);
                    sample->dir_path_=NULL;

                }
            }

            void FileList_Request__finalize_optional_members(
                FileList_Request_* sample, RTIBool deletePointers)
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

            RTIBool FileList_Request__copy(
                FileList_Request_* dst,
                const FileList_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->dir_path_, src->dir_path_, 
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
            * Configure and implement 'FileList_Request_' sequence class.
            */
            #define T FileList_Request_
            #define TSeq FileList_Request_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::FileList_Request__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::FileList_Request__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::FileList_Request__copy

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
            const char *FileList_Response_TYPENAME = "mavros_msgs::srv::dds_::FileList_Response_";

            DDS_TypeCode* FileList_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FileList_Response__g_tc_list__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member FileList_Response__g_tc_members[3]=
                {

                    {
                        (char *)"list_",/* Member name */
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
                        (char *)"success_",/* Member name */
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
                        (char *)"r_errno_",/* Member name */
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

                static DDS_TypeCode FileList_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::srv::dds_::FileList_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        FileList_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FileList_Response_*/

                if (is_initialized) {
                    return &FileList_Response__g_tc;
                }

                FileList_Response__g_tc_list__sequence._data._typeCode = (RTICdrTypeCode *)mavros_msgs::msg::dds_::FileEntry__get_typecode();

                FileList_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& FileList_Response__g_tc_list__sequence;
                FileList_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                FileList_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &FileList_Response__g_tc;
            }

            RTIBool FileList_Response__initialize(
                FileList_Response_* sample) {
                return mavros_msgs::srv::dds_::FileList_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FileList_Response__initialize_ex(
                FileList_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::srv::dds_::FileList_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FileList_Response__initialize_w_params(
                FileList_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    mavros_msgs::msg::dds_::FileEntry_Seq_initialize(&sample->list_ );
                    mavros_msgs::msg::dds_::FileEntry_Seq_set_element_allocation_params(&sample->list_ ,allocParams);
                    mavros_msgs::msg::dds_::FileEntry_Seq_set_absolute_maximum(&sample->list_ , RTI_INT32_MAX);
                    if (!mavros_msgs::msg::dds_::FileEntry_Seq_set_maximum(&sample->list_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    mavros_msgs::msg::dds_::FileEntry_Seq_set_length(&sample->list_, 0);
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->r_errno_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void FileList_Response__finalize(
                FileList_Response_* sample)
            {

                mavros_msgs::srv::dds_::FileList_Response__finalize_ex(sample,RTI_TRUE);
            }

            void FileList_Response__finalize_ex(
                FileList_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::srv::dds_::FileList_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void FileList_Response__finalize_w_params(
                FileList_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                mavros_msgs::msg::dds_::FileEntry_Seq_set_element_deallocation_params(
                    &sample->list_,deallocParams);
                mavros_msgs::msg::dds_::FileEntry_Seq_finalize(&sample->list_);

            }

            void FileList_Response__finalize_optional_members(
                FileList_Response_* sample, RTIBool deletePointers)
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
                    length = mavros_msgs::msg::dds_::FileEntry_Seq_get_length(
                        &sample->list_);

                    for (i = 0; i < length; i++) {
                        mavros_msgs::msg::dds_::FileEntry__finalize_optional_members(
                            mavros_msgs::msg::dds_::FileEntry_Seq_get_reference(
                                &sample->list_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool FileList_Response__copy(
                FileList_Response_* dst,
                const FileList_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!mavros_msgs::msg::dds_::FileEntry_Seq_copy(&dst->list_ ,
                    &src->list_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->r_errno_, &src->r_errno_)) { 
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
            * Configure and implement 'FileList_Response_' sequence class.
            */
            #define T FileList_Response_
            #define TSeq FileList_Response_Seq

            #define T_initialize_w_params mavros_msgs::srv::dds_::FileList_Response__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::srv::dds_::FileList_Response__finalize_w_params
            #define T_copy       mavros_msgs::srv::dds_::FileList_Response__copy

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

