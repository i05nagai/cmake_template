

LIST (APPEND target_test_SOURCES
    project/target_test/main.cpp
    project/target_test/TargetClassTest.cpp
    project/target_test/folder/DataClassTest.cpp
    project/target_test/folder/DerivedClassTest.cpp
)
LIST (APPEND target_test_HEADERS
    project/target_test/pre_compiled_header.h
    project/target_test/TargetClassTest.h
    project/target_test/folder/DataClassTest.h
    project/target_test/folder/DerivedClassTest.h
    project/target_test/folder/mock/IBaseClassMock.h
)

