

LIST (APPEND target2_test_SOURCES
    project/target2_test/main.cpp
    project/target2_test/TargetClassTest.cpp
    project/target2_test/folder/DataClassTest.cpp
    project/target2_test/folder/DerivedClassTest.cpp
)
LIST (APPEND target2_test_HEADERS
    project/target2_test/pre_compiled_header.h
    project/target2_test/TargetClassTest.h
    project/target2_test/folder/DataClassTest.h
    project/target2_test/folder/DerivedClassTest.h
    project/target2_test/folder/mock/IBaseClassMock.h
)

