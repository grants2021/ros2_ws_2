

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TerrainReport_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TerrainReport__717181237_h
#define TerrainReport__717181237_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TerrainReport_TYPENAME;

            struct TerrainReport_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TerrainReport_TypeSupport;
            class TerrainReport_DataWriter;
            class TerrainReport_DataReader;
            #endif

            class TerrainReport_ 
            {
              public:
                typedef struct TerrainReport_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TerrainReport_TypeSupport TypeSupport;
                typedef TerrainReport_DataWriter DataWriter;
                typedef TerrainReport_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   latitude_ ;
                DDS_Double   longitude_ ;
                DDS_UnsignedShort   spacing_ ;
                DDS_Float   terrain_height_ ;
                DDS_Float   current_height_ ;
                DDS_UnsignedShort   pending_ ;
                DDS_UnsignedShort   loaded_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TerrainReport__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TerrainReport_Seq, TerrainReport_);

            NDDSUSERDllExport
            RTIBool TerrainReport__initialize(
                TerrainReport_* self);

            NDDSUSERDllExport
            RTIBool TerrainReport__initialize_ex(
                TerrainReport_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TerrainReport__initialize_w_params(
                TerrainReport_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TerrainReport__finalize(
                TerrainReport_* self);

            NDDSUSERDllExport
            void TerrainReport__finalize_ex(
                TerrainReport_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TerrainReport__finalize_w_params(
                TerrainReport_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TerrainReport__finalize_optional_members(
                TerrainReport_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TerrainReport__copy(
                TerrainReport_* dst,
                const TerrainReport_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* TerrainReport_ */

