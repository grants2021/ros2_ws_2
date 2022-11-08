

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CellularStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CellularStatus__400687708_h
#define CellularStatus__400687708_h

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

            extern const char *CellularStatus_TYPENAME;

            struct CellularStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CellularStatus_TypeSupport;
            class CellularStatus_DataWriter;
            class CellularStatus_DataReader;
            #endif

            class CellularStatus_ 
            {
              public:
                typedef struct CellularStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CellularStatus_TypeSupport TypeSupport;
                typedef CellularStatus_DataWriter DataWriter;
                typedef CellularStatus_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                DDS_Octet   failure_reason_ ;
                DDS_Octet   type_ ;
                DDS_Octet   quality_ ;
                DDS_UnsignedShort   mcc_ ;
                DDS_UnsignedShort   mnc_ ;
                DDS_UnsignedShort   lac_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CellularStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CellularStatus_Seq, CellularStatus_);

            NDDSUSERDllExport
            RTIBool CellularStatus__initialize(
                CellularStatus_* self);

            NDDSUSERDllExport
            RTIBool CellularStatus__initialize_ex(
                CellularStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CellularStatus__initialize_w_params(
                CellularStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CellularStatus__finalize(
                CellularStatus_* self);

            NDDSUSERDllExport
            void CellularStatus__finalize_ex(
                CellularStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CellularStatus__finalize_w_params(
                CellularStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CellularStatus__finalize_optional_members(
                CellularStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CellularStatus__copy(
                CellularStatus_* dst,
                const CellularStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* CellularStatus_ */

