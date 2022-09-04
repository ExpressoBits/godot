/* register_types.cpp */

#include "register_types.h"

#include "core/object/class_db.h"
#include "summator.h"

void initialize_summator_module(ModuleInitializationLevel p_level) {
    ClassDB::register_class<Summator>();
}

void uninitialize_summator_module(ModuleInitializationLevel p_level) {
   // Nothing to do here in this example.
}