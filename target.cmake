

LIST (APPEND target_SOURCES
    project/target/TargetClass.cpp
    project/target/folder/DataClass.cpp
    project/target/folder/DerivedClass.cpp
    project/target/folder/IBaseClass.cpp
)
LIST (APPEND target_HEADERS
    project/target/pre_compiled_header.h
    project/target/TargetClass.h
    project/target/folder/DataClass.h
    project/target/folder/DerivedClass.h
    project/target/folder/IBaseClass.h
)

