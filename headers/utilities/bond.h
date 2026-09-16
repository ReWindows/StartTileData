#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartTileData.dll by Windissect. 17 member(s).
class bond {
public:
    class CoreException;
    class Exception;
    class FieldDef;
    class GUID;
    class InputBuffer;
    class Metadata;
    class SchemaDef;
    class SerializableExceptionBase;
    class StreamException;
    class StructDef;
    class TypeDef;
    class Variant;
    class blob;
    class detail;
    class reflection;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExceededMaxRecursionDepthException@bond@@YAXXZ
    void ExceededMaxRecursionDepthException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidEnumValueException@bond@@YAXHPEBD@Z
    void InvalidEnumValueException(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfBoundObjectSizeException@bond@@YAXXZ
    void OutOfBoundObjectSizeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfBoundStringSizeException@bond@@YAXXZ
    void OutOfBoundStringSizeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnknownDataTypeException@bond@@YAXXZ
    void UnknownDataTypeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnknownProtocolException@bond@@YAXXZ
    void UnknownProtocolException();
};
