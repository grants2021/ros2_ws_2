

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Waypoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Waypoint_Plugin_1538706609_h
#define Waypoint_Plugin_1538706609_h

#include "Waypoint_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace Waypoint_Constants {
            } /* namespace Waypoint_Constants  */

            #define Waypoint_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define Waypoint_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Waypoint_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define Waypoint_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Waypoint_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Waypoint_*
            Waypoint_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Waypoint_*
            Waypoint_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Waypoint_*
            Waypoint_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Waypoint_PluginSupport_copy_data(
                Waypoint_ *out,
                const Waypoint_ *in);

            NDDSUSERDllExport extern void 
            Waypoint_PluginSupport_destroy_data_w_params(
                Waypoint_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Waypoint_PluginSupport_destroy_data_ex(
                Waypoint_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Waypoint_PluginSupport_destroy_data(
                Waypoint_ *sample);

            NDDSUSERDllExport extern void 
            Waypoint_PluginSupport_print_data(
                const Waypoint_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Waypoint_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Waypoint_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Waypoint_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Waypoint_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Waypoint_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ *out,
                const Waypoint_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Waypoint_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Waypoint_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Waypoint_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Waypoint_Plugin_deserialize_from_cdr_buffer(
                Waypoint_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            Waypoint_Plugin_data_to_string(
                const Waypoint_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            Waypoint_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            Waypoint_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            Waypoint_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Waypoint_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            Waypoint_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Waypoint_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Waypoint_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Waypoint_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Waypoint_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Waypoint_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            Waypoint_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Waypoint_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Waypoint_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Waypoint_Plugin_new(void);

            NDDSUSERDllExport extern void
            Waypoint_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Waypoint_Plugin_1538706609_h */

