// Library definition for Wolfram LibraryLink

#ifndef SetReplace_hpp
#define SetReplace_hpp

#include "WolframLibrary.h"

EXTERN_C DLLEXPORT mint WolframLibrary_getVersion();

EXTERN_C DLLEXPORT int WolframLibrary_initialize(WolframLibraryData libData);

EXTERN_C DLLEXPORT void WolframLibrary_uninitialize(WolframLibraryData libData);

/** @brief Creates a new set object.
 * @return Pointer to the newly created set in memory.
 * @note Memory is not managed, the set needs to be destroyed manually.
*/
EXTERN_C DLLEXPORT int setCreate(WolframLibraryData libData, mint argc, MArgument *argv, MArgument result);

/** @brief Destroys a set given a pointer.
 */
EXTERN_C DLLEXPORT int setDelete(WolframLibraryData libData, mint argc, MArgument *argv, MArgument result);

/** @brief Performs a specified number of replacements, but does not return anything.
 */
EXTERN_C DLLEXPORT int setReplace(WolframLibraryData libData, mint argc, MArgument *argv, MArgument result);

/** @brief Returns a list of expressions for a specified set pointer.
 */
EXTERN_C DLLEXPORT int setExpressions(WolframLibraryData libData, mint argc, MArgument *argv, MArgument result);

#endif /* SetReplace_hpp */
