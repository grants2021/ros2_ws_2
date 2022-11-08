

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Trajectory__1921949597_h
#define Trajectory__1921949597_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/PositionTarget_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace Trajectory_Constants {
                static const DDS_Octet MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS_= 0;
                static const DDS_Octet MAV_TRAJECTORY_REPRESENTATION_BEZIER_= 1;
            } /* namespace Trajectory_Constants  */

            extern const char *Trajectory_TYPENAME;

            struct Trajectory_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Trajectory_TypeSupport;
            class Trajectory_DataWriter;
            class Trajectory_DataReader;
            #endif

            class Trajectory_ 
            {
              public:
                typedef struct Trajectory_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Trajectory_TypeSupport TypeSupport;
                typedef Trajectory_DataWriter DataWriter;
                typedef Trajectory_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   type_ ;
                mavros_msgs::msg::dds_::PositionTarget_   point_1_ ;
                mavros_msgs::msg::dds_::PositionTarget_   point_2_ ;
                mavros_msgs::msg::dds_::PositionTarget_   point_3_ ;
                mavros_msgs::msg::dds_::PositionTarget_   point_4_ ;
                mavros_msgs::msg::dds_::PositionTarget_   point_5_ ;
                DDS_Octet   point_valid_ [5];
                DDS_UnsignedShort   command_ [5];
                DDS_Float   time_horizon_ [5];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Trajectory__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Trajectory_Seq, Trajectory_);

            NDDSUSERDllExport
            RTIBool Trajectory__initialize(
                Trajectory_* self);

            NDDSUSERDllExport
            RTIBool Trajectory__initialize_ex(
                Trajectory_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Trajectory__initialize_w_params(
                Trajectory_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Trajectory__finalize(
                Trajectory_* self);

            NDDSUSERDllExport
            void Trajectory__finalize_ex(
                Trajectory_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Trajectory__finalize_w_params(
                Trajectory_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Trajectory__finalize_optional_members(
                Trajectory_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Trajectory__copy(
                Trajectory_* dst,
                const Trajectory_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Trajectory_ */

