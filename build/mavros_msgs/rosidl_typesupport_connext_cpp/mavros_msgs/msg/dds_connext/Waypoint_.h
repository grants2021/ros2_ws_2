

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Waypoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Waypoint__1538706609_h
#define Waypoint__1538706609_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace Waypoint_Constants {
                static const DDS_Octet FRAME_GLOBAL_= 0;
                static const DDS_Octet FRAME_LOCAL_NED_= 1;
                static const DDS_Octet FRAME_MISSION_= 2;
                static const DDS_Octet FRAME_GLOBAL_REL_ALT_= 3;
                static const DDS_Octet FRAME_LOCAL_ENU_= 4;
                static const DDS_Octet FRAME_GLOBAL_INT_= 5;
                static const DDS_Octet FRAME_GLOBAL_RELATIVE_ALT_INT_= 6;
                static const DDS_Octet FRAME_LOCAL_OFFSET_NED_= 7;
                static const DDS_Octet FRAME_BODY_NED_= 8;
                static const DDS_Octet FRAME_BODY_OFFSET_NED_= 9;
                static const DDS_Octet FRAME_GLOBAL_TERRAIN_ALT_= 10;
                static const DDS_Octet FRAME_GLOBAL_TERRAIN_ALT_INT_= 11;
                static const DDS_Octet FRAME_BODY_FRD_= 12;
                static const DDS_Octet FRAME_RESERVED_13_= 13;
                static const DDS_Octet FRAME_RESERVED_14_= 14;
                static const DDS_Octet FRAME_RESERVED_15_= 15;
                static const DDS_Octet FRAME_RESERVED_16_= 16;
                static const DDS_Octet FRAME_RESERVED_17_= 17;
                static const DDS_Octet FRAME_RESERVED_18_= 18;
                static const DDS_Octet FRAME_RESERVED_19_= 19;
                static const DDS_Octet FRAME_LOCAL_FRD_= 20;
                static const DDS_Octet FRAME_LOCAL_FLU_= 21;
            } /* namespace Waypoint_Constants  */

            extern const char *Waypoint_TYPENAME;

            struct Waypoint_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Waypoint_TypeSupport;
            class Waypoint_DataWriter;
            class Waypoint_DataReader;
            #endif

            class Waypoint_ 
            {
              public:
                typedef struct Waypoint_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Waypoint_TypeSupport TypeSupport;
                typedef Waypoint_DataWriter DataWriter;
                typedef Waypoint_DataReader DataReader;
                #endif

                DDS_Octet   frame_ ;
                DDS_UnsignedShort   command_ ;
                DDS_Boolean   is_current_ ;
                DDS_Boolean   autocontinue_ ;
                DDS_Float   param1_ ;
                DDS_Float   param2_ ;
                DDS_Float   param3_ ;
                DDS_Float   param4_ ;
                DDS_Double   x_lat_ ;
                DDS_Double   y_long_ ;
                DDS_Double   z_alt_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Waypoint__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Waypoint_Seq, Waypoint_);

            NDDSUSERDllExport
            RTIBool Waypoint__initialize(
                Waypoint_* self);

            NDDSUSERDllExport
            RTIBool Waypoint__initialize_ex(
                Waypoint_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Waypoint__initialize_w_params(
                Waypoint_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Waypoint__finalize(
                Waypoint_* self);

            NDDSUSERDllExport
            void Waypoint__finalize_ex(
                Waypoint_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Waypoint__finalize_w_params(
                Waypoint_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Waypoint__finalize_optional_members(
                Waypoint_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Waypoint__copy(
                Waypoint_* dst,
                const Waypoint_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Waypoint_ */

