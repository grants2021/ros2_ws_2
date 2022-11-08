
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSINPUT_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "GPSINPUT_Plugin.h"

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace GPSINPUT_Constants {
            } /* namespace GPSINPUT_Constants  */

            /* ----------------------------------------------------------------------------
            *  Type GPSINPUT_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            GPSINPUT_*
            GPSINPUT_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                GPSINPUT_ *sample = NULL;

                sample = new (std::nothrow) GPSINPUT_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!mavros_msgs::msg::dds_::GPSINPUT__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            GPSINPUT_ *
            GPSINPUT_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                GPSINPUT_ *sample = NULL;

                sample = new (std::nothrow) GPSINPUT_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!mavros_msgs::msg::dds_::GPSINPUT__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            GPSINPUT_ *
            GPSINPUT_PluginSupport_create_data(void)
            {
                return mavros_msgs::msg::dds_::GPSINPUT_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            GPSINPUT_PluginSupport_destroy_data_w_params(
                GPSINPUT_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                mavros_msgs::msg::dds_::GPSINPUT__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            GPSINPUT_PluginSupport_destroy_data_ex(
                GPSINPUT_ *sample,RTIBool deallocate_pointers) {

                mavros_msgs::msg::dds_::GPSINPUT__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            GPSINPUT_PluginSupport_destroy_data(
                GPSINPUT_ *sample) {

                mavros_msgs::msg::dds_::GPSINPUT_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            GPSINPUT_PluginSupport_copy_data(
                GPSINPUT_ *dst,
                const GPSINPUT_ *src)
            {
                return mavros_msgs::msg::dds_::GPSINPUT__copy(dst,(const GPSINPUT_*) src);
            }

            void 
            GPSINPUT_PluginSupport_print_data(
                const GPSINPUT_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                std_msgs::msg::dds_::Header_PluginSupport_print_data(
                    (const std_msgs::msg::dds_::Header_*) &sample->header_, "header_", indent_level + 1);

                RTICdrType_printOctet(
                    &sample->fix_type_, "fix_type_", indent_level + 1);    

                RTICdrType_printOctet(
                    &sample->gps_id_, "gps_id_", indent_level + 1);    

                RTICdrType_printUnsignedShort(
                    &sample->ignore_flags_, "ignore_flags_", indent_level + 1);    

                RTICdrType_printUnsignedLong(
                    &sample->time_week_ms_, "time_week_ms_", indent_level + 1);    

                RTICdrType_printUnsignedShort(
                    &sample->time_week_, "time_week_", indent_level + 1);    

                RTICdrType_printLong(
                    &sample->lat_, "lat_", indent_level + 1);    

                RTICdrType_printLong(
                    &sample->lon_, "lon_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->alt_, "alt_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->hdop_, "hdop_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->vdop_, "vdop_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->vn_, "vn_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->ve_, "ve_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->vd_, "vd_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->speed_accuracy_, "speed_accuracy_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->horiz_accuracy_, "horiz_accuracy_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->vert_accuracy_, "vert_accuracy_", indent_level + 1);    

                RTICdrType_printOctet(
                    &sample->satellites_visible_, "satellites_visible_", indent_level + 1);    

                RTICdrType_printUnsignedShort(
                    &sample->yaw_, "yaw_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            GPSINPUT_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            GPSINPUT_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            GPSINPUT_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    mavros_msgs::msg::dds_::GPSINPUT_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    mavros_msgs::msg::dds_::GPSINPUT_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            GPSINPUT_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            GPSINPUT_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ *sample,
                void *handle)
            {

                GPSINPUT__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            GPSINPUT_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ *dst,
                const GPSINPUT_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return mavros_msgs::msg::dds_::GPSINPUT_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            GPSINPUT_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            GPSINPUT_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const GPSINPUT_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if(!std_msgs::msg::dds_::Header_Plugin_serialize(
                        endpoint_data,
                        (const std_msgs::msg::dds_::Header_*) &sample->header_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->fix_type_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->gps_id_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedShort(
                        stream, &sample->ignore_flags_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedLong(
                        stream, &sample->time_week_ms_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedShort(
                        stream, &sample->time_week_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->lat_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->lon_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->alt_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->hdop_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->vdop_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->vn_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->ve_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->vd_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->speed_accuracy_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->horiz_accuracy_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->vert_accuracy_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->satellites_visible_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedShort(
                        stream, &sample->yaw_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            GPSINPUT_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        mavros_msgs::msg::dds_::GPSINPUT__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!std_msgs::msg::dds_::Header_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->header_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->fix_type_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->gps_id_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedShort(
                            stream, &sample->ignore_flags_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedLong(
                            stream, &sample->time_week_ms_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedShort(
                            stream, &sample->time_week_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->lat_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->lon_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->alt_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->hdop_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->vdop_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->vn_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->ve_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->vd_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->speed_accuracy_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->horiz_accuracy_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->vert_accuracy_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->satellites_visible_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedShort(
                            stream, &sample->yaw_)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            GPSINPUT_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSINPUT_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                GPSINPUT_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    GPSINPUT_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            GPSINPUT_Plugin_deserialize_from_cdr_buffer(
                GPSINPUT_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                GPSINPUT__finalize_optional_members(sample, RTI_TRUE);
                return GPSINPUT_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            GPSINPUT_Plugin_data_to_string(
                const GPSINPUT_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!GPSINPUT_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!GPSINPUT_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    GPSINPUT__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            GPSINPUT_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "GPSINPUT_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= mavros_msgs::msg::dds_::GPSINPUT_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "GPSINPUT_");

                }

                return result;

            }

            RTIBool GPSINPUT_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!std_msgs::msg::dds_::Header_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedShort (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedShort (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedShort (stream)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            GPSINPUT_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=std_msgs::msg::dds_::Header_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            GPSINPUT_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = GPSINPUT_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            GPSINPUT_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=std_msgs::msg::dds_::Header_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            GPSINPUT_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const GPSINPUT_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += std_msgs::msg::dds_::Header_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const std_msgs::msg::dds_::Header_*) &sample->header_);

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            GPSINPUT_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            GPSINPUT_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const GPSINPUT_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool GPSINPUT_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!mavros_msgs::msg::dds_::GPSINPUT_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool GPSINPUT_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= mavros_msgs::msg::dds_::GPSINPUT_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            GPSINPUT_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            GPSINPUT_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = GPSINPUT_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            GPSINPUT_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSINPUT_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!mavros_msgs::msg::dds_::GPSINPUT_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *GPSINPUT_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                GPSINPUT_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                GPSINPUT_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                GPSINPUT__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                GPSINPUT_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                GPSINPUT_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)mavros_msgs::msg::dds_::GPSINPUT__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                GPSINPUT_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                GPSINPUT_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                mavros_msgs::msg::dds_::GPSINPUT_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = GPSINPUT_TYPENAME;

                return plugin;
            }

            void
            GPSINPUT_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */
#undef RTI_CDR_CURRENT_SUBMODULE 
