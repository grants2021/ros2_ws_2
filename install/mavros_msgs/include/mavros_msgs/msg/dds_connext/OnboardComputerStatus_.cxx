

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OnboardComputerStatus_.idl using "rtiddsgen".
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

#include "OnboardComputerStatus_.h"

#include <new>

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *OnboardComputerStatus_TYPENAME = "mavros_msgs::msg::dds_::OnboardComputerStatus_";

            DDS_TypeCode* OnboardComputerStatus__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode OnboardComputerStatus__g_tc_cpu_cores__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,8, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_cpu_combined__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,10, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_gpu_cores__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_gpu_combined__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,10, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_temperature_core__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,8, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_fan_speed__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_storage_type__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_storage_usage__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_storage_total__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_link_type__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,6, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_link_tx_rate__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,6, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_link_rx_rate__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,6, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_link_tx_max__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,6, NULL,NULL);
                static DDS_TypeCode OnboardComputerStatus__g_tc_link_rx_max__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,6, NULL,NULL);
                static DDS_TypeCode_Member OnboardComputerStatus__g_tc_members[21]=
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
                        (char *)"component_",/* Member name */
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
                        (char *)"uptime_",/* Member name */
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
                        (char *)"type_",/* Member name */
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
                        (char *)"cpu_cores_",/* Member name */
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
                        (char *)"cpu_combined_",/* Member name */
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
                        (char *)"gpu_cores_",/* Member name */
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
                        (char *)"gpu_combined_",/* Member name */
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
                        (char *)"temperature_board_",/* Member name */
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
                        (char *)"temperature_core_",/* Member name */
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
                    }, 
                    {
                        (char *)"fan_speed_",/* Member name */
                        {
                            10,/* Representation ID */          
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
                        (char *)"ram_usage_",/* Member name */
                        {
                            11,/* Representation ID */          
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
                        (char *)"ram_total_",/* Member name */
                        {
                            12,/* Representation ID */          
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
                        (char *)"storage_type_",/* Member name */
                        {
                            13,/* Representation ID */          
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
                        (char *)"storage_usage_",/* Member name */
                        {
                            14,/* Representation ID */          
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
                        (char *)"storage_total_",/* Member name */
                        {
                            15,/* Representation ID */          
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
                        (char *)"link_type_",/* Member name */
                        {
                            16,/* Representation ID */          
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
                        (char *)"link_tx_rate_",/* Member name */
                        {
                            17,/* Representation ID */          
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
                        (char *)"link_rx_rate_",/* Member name */
                        {
                            18,/* Representation ID */          
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
                        (char *)"link_tx_max_",/* Member name */
                        {
                            19,/* Representation ID */          
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
                        (char *)"link_rx_max_",/* Member name */
                        {
                            20,/* Representation ID */          
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

                static DDS_TypeCode OnboardComputerStatus__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mavros_msgs::msg::dds_::OnboardComputerStatus_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        21, /* Number of members */
                        OnboardComputerStatus__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for OnboardComputerStatus_*/

                if (is_initialized) {
                    return &OnboardComputerStatus__g_tc;
                }

                OnboardComputerStatus__g_tc_cpu_cores__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_cpu_combined__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_gpu_cores__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_gpu_combined__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_temperature_core__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_fan_speed__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;

                OnboardComputerStatus__g_tc_storage_type__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_storage_usage__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_storage_total__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_link_type__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_link_tx_rate__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_link_rx_rate__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_link_tx_max__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_link_rx_max__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                OnboardComputerStatus__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_cpu_cores__array;
                OnboardComputerStatus__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_cpu_combined__array;
                OnboardComputerStatus__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_gpu_cores__array;
                OnboardComputerStatus__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_gpu_combined__array;
                OnboardComputerStatus__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                OnboardComputerStatus__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_temperature_core__array;
                OnboardComputerStatus__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_fan_speed__array;
                OnboardComputerStatus__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                OnboardComputerStatus__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_storage_type__array;
                OnboardComputerStatus__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_storage_usage__array;
                OnboardComputerStatus__g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_storage_total__array;
                OnboardComputerStatus__g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_link_type__array;
                OnboardComputerStatus__g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_link_tx_rate__array;
                OnboardComputerStatus__g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_link_rx_rate__array;
                OnboardComputerStatus__g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_link_tx_max__array;
                OnboardComputerStatus__g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)& OnboardComputerStatus__g_tc_link_rx_max__array;

                is_initialized = RTI_TRUE;

                return &OnboardComputerStatus__g_tc;
            }

            RTIBool OnboardComputerStatus__initialize(
                OnboardComputerStatus_* sample) {
                return mavros_msgs::msg::dds_::OnboardComputerStatus__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool OnboardComputerStatus__initialize_ex(
                OnboardComputerStatus_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mavros_msgs::msg::dds_::OnboardComputerStatus__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool OnboardComputerStatus__initialize_w_params(
                OnboardComputerStatus_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initOctet(&sample->component_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->uptime_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->cpu_cores_, (8), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->cpu_combined_, (10), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->gpu_cores_, (4), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->gpu_combined_, (10), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->temperature_board_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->temperature_core_, (8), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->fan_speed_, (4), RTI_CDR_SHORT_SIZE)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->ram_usage_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->ram_total_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->storage_type_, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->storage_usage_, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->storage_total_, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->link_type_, (6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->link_tx_rate_, (6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->link_rx_rate_, (6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->link_tx_max_, (6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->link_rx_max_, (6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void OnboardComputerStatus__finalize(
                OnboardComputerStatus_* sample)
            {

                mavros_msgs::msg::dds_::OnboardComputerStatus__finalize_ex(sample,RTI_TRUE);
            }

            void OnboardComputerStatus__finalize_ex(
                OnboardComputerStatus_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mavros_msgs::msg::dds_::OnboardComputerStatus__finalize_w_params(
                    sample,&deallocParams);
            }

            void OnboardComputerStatus__finalize_w_params(
                OnboardComputerStatus_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

            }

            void OnboardComputerStatus__finalize_optional_members(
                OnboardComputerStatus_* sample, RTIBool deletePointers)
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

            RTIBool OnboardComputerStatus__copy(
                OnboardComputerStatus_* dst,
                const OnboardComputerStatus_* src)
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
                        &dst->component_, &src->component_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->uptime_, &src->uptime_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->cpu_cores_ ,src->cpu_cores_,(8), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->cpu_combined_ ,src->cpu_combined_,(10), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->gpu_cores_ ,src->gpu_cores_,(4), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->gpu_combined_ ,src->gpu_combined_,(10), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->temperature_board_, &src->temperature_board_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->temperature_core_ ,src->temperature_core_,(8), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->fan_speed_ ,src->fan_speed_,(4), RTI_CDR_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->ram_usage_, &src->ram_usage_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->ram_total_, &src->ram_total_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->storage_type_ ,src->storage_type_,(4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->storage_usage_ ,src->storage_usage_,(4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->storage_total_ ,src->storage_total_,(4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->link_type_ ,src->link_type_,(6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->link_tx_rate_ ,src->link_tx_rate_,(6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->link_rx_rate_ ,src->link_rx_rate_,(6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->link_tx_max_ ,src->link_tx_max_,(6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->link_rx_max_ ,src->link_rx_max_,(6), RTI_CDR_UNSIGNED_LONG_SIZE)) {
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
            * Configure and implement 'OnboardComputerStatus_' sequence class.
            */
            #define T OnboardComputerStatus_
            #define TSeq OnboardComputerStatus_Seq

            #define T_initialize_w_params mavros_msgs::msg::dds_::OnboardComputerStatus__initialize_w_params

            #define T_finalize_w_params   mavros_msgs::msg::dds_::OnboardComputerStatus__finalize_w_params
            #define T_copy       mavros_msgs::msg::dds_::OnboardComputerStatus__copy

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

