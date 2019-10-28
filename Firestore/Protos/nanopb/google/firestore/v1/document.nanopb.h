/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 */

#ifndef PB_GOOGLE_FIRESTORE_V1_DOCUMENT_NANOPB_H_INCLUDED
#define PB_GOOGLE_FIRESTORE_V1_DOCUMENT_NANOPB_H_INCLUDED
#include <pb.h>

#include "google/api/annotations.nanopb.h"

#include "google/protobuf/struct.nanopb.h"

#include "google/protobuf/timestamp.nanopb.h"

#include "google/type/latlng.nanopb.h"

#include "absl/strings/str_cat.h"
#include "nanopb_pretty_printers.h"

namespace firebase {
namespace firestore {
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Struct definitions */
typedef struct _google_firestore_v1_ArrayValue {
    pb_size_t values_count;
    struct _google_firestore_v1_Value *values;

    static const char* Name() {
        return "ArrayValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<ArrayValue 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintRepeatedField("values ",
            values, values_count, indent + 1);

        if (!result.empty() || is_root) {
          std::string tail = Indent(is_root ? 0 : indent) + '}';
          return header + result + tail;
        } else {
          return "";
        }
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_ArrayValue) */
} google_firestore_v1_ArrayValue;

typedef struct _google_firestore_v1_MapValue {
    pb_size_t fields_count;
    struct _google_firestore_v1_MapValue_FieldsEntry *fields;

    static const char* Name() {
        return "MapValue";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<MapValue 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintRepeatedField("fields ",
            fields, fields_count, indent + 1);

        if (!result.empty() || is_root) {
          std::string tail = Indent(is_root ? 0 : indent) + '}';
          return header + result + tail;
        } else {
          return "";
        }
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_MapValue) */
} google_firestore_v1_MapValue;

typedef struct _google_firestore_v1_Document {
    pb_bytes_array_t *name;
    pb_size_t fields_count;
    struct _google_firestore_v1_Document_FieldsEntry *fields;
    google_protobuf_Timestamp create_time;
    bool has_update_time;
    google_protobuf_Timestamp update_time;

    static const char* Name() {
        return "Document";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<Document 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintField("name: ", name, indent + 1, false);
        result += PrintRepeatedField("fields ",
            fields, fields_count, indent + 1);
        result += PrintField("create_time ", create_time, indent + 1, false);
        if (has_update_time) result += PrintField("update_time ", update_time, indent + 1, true);

        std::string tail = Indent(is_root ? 0 : indent) + '}';
        return header + result + tail;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_Document) */
} google_firestore_v1_Document;

typedef struct _google_firestore_v1_Value {
    pb_size_t which_value_type;
    union {
        bool boolean_value;
        int64_t integer_value;
        double double_value;
        pb_bytes_array_t *reference_value;
        google_firestore_v1_MapValue map_value;
        google_type_LatLng geo_point_value;
        google_firestore_v1_ArrayValue array_value;
        google_protobuf_Timestamp timestamp_value;
        google_protobuf_NullValue null_value;
        pb_bytes_array_t *string_value;
        pb_bytes_array_t *bytes_value;
    };

    static const char* Name() {
        return "Value";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<Value 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        switch (which_value_type) {
          case 1: // google_firestore_v1_Value_boolean_value_tag
            result += PrintField("boolean_value: ", boolean_value, indent + 1, true);
            break;
          case 2: // google_firestore_v1_Value_integer_value_tag
            result += PrintField("integer_value: ", integer_value, indent + 1, true);
            break;
          case 3: // google_firestore_v1_Value_double_value_tag
            result += PrintField("double_value: ", double_value, indent + 1, true);
            break;
          case 5: // google_firestore_v1_Value_reference_value_tag
            result += PrintField("reference_value: ", reference_value, indent + 1, true);
            break;
          case 6: // google_firestore_v1_Value_map_value_tag
            result += PrintField("map_value ", map_value, indent + 1, true);
            break;
          case 8: // google_firestore_v1_Value_geo_point_value_tag
            result += PrintField("geo_point_value ", geo_point_value, indent + 1, true);
            break;
          case 9: // google_firestore_v1_Value_array_value_tag
            result += PrintField("array_value ", array_value, indent + 1, true);
            break;
          case 10: // google_firestore_v1_Value_timestamp_value_tag
            result += PrintField("timestamp_value ", timestamp_value, indent + 1, true);
            break;
          case 11: // google_firestore_v1_Value_null_value_tag
            result += PrintField("null_value: ", null_value, indent + 1, true);
            break;
          case 17: // google_firestore_v1_Value_string_value_tag
            result += PrintField("string_value: ", string_value, indent + 1, true);
            break;
          case 18: // google_firestore_v1_Value_bytes_value_tag
            result += PrintField("bytes_value: ", bytes_value, indent + 1, true);
            break;
        }


        if (!result.empty() || is_root) {
          std::string tail = Indent(is_root ? 0 : indent) + '}';
          return header + result + tail;
        } else {
          return "";
        }
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_Value) */
} google_firestore_v1_Value;

typedef struct _google_firestore_v1_Document_FieldsEntry {
    pb_bytes_array_t *key;
    google_firestore_v1_Value value;

    static const char* Name() {
        return "FieldsEntry";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<FieldsEntry 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintField("key: ", key, indent + 1, false);
        result += PrintField("value ", value, indent + 1, false);

        std::string tail = Indent(is_root ? 0 : indent) + '}';
        return header + result + tail;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_Document_FieldsEntry) */
} google_firestore_v1_Document_FieldsEntry;

typedef struct _google_firestore_v1_MapValue_FieldsEntry {
    pb_bytes_array_t *key;
    google_firestore_v1_Value value;

    static const char* Name() {
        return "FieldsEntry";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<FieldsEntry 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintField("key: ", key, indent + 1, false);
        result += PrintField("value ", value, indent + 1, false);

        std::string tail = Indent(is_root ? 0 : indent) + '}';
        return header + result + tail;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_MapValue_FieldsEntry) */
} google_firestore_v1_MapValue_FieldsEntry;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_firestore_v1_Document_init_default {NULL, 0, NULL, google_protobuf_Timestamp_init_default, false, google_protobuf_Timestamp_init_default}
#define google_firestore_v1_Document_FieldsEntry_init_default {NULL, google_firestore_v1_Value_init_default}
#define google_firestore_v1_Value_init_default   {0, {0}}
#define google_firestore_v1_ArrayValue_init_default {0, NULL}
#define google_firestore_v1_MapValue_init_default {0, NULL}
#define google_firestore_v1_MapValue_FieldsEntry_init_default {NULL, google_firestore_v1_Value_init_default}
#define google_firestore_v1_Document_init_zero   {NULL, 0, NULL, google_protobuf_Timestamp_init_zero, false, google_protobuf_Timestamp_init_zero}
#define google_firestore_v1_Document_FieldsEntry_init_zero {NULL, google_firestore_v1_Value_init_zero}
#define google_firestore_v1_Value_init_zero      {0, {0}}
#define google_firestore_v1_ArrayValue_init_zero {0, NULL}
#define google_firestore_v1_MapValue_init_zero   {0, NULL}
#define google_firestore_v1_MapValue_FieldsEntry_init_zero {NULL, google_firestore_v1_Value_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define google_firestore_v1_ArrayValue_values_tag 1
#define google_firestore_v1_MapValue_fields_tag  1
#define google_firestore_v1_Document_name_tag    1
#define google_firestore_v1_Document_fields_tag  2
#define google_firestore_v1_Document_create_time_tag 3
#define google_firestore_v1_Document_update_time_tag 4
#define google_firestore_v1_Value_boolean_value_tag 1
#define google_firestore_v1_Value_integer_value_tag 2
#define google_firestore_v1_Value_double_value_tag 3
#define google_firestore_v1_Value_reference_value_tag 5
#define google_firestore_v1_Value_map_value_tag  6
#define google_firestore_v1_Value_geo_point_value_tag 8
#define google_firestore_v1_Value_array_value_tag 9
#define google_firestore_v1_Value_timestamp_value_tag 10
#define google_firestore_v1_Value_null_value_tag 11
#define google_firestore_v1_Value_string_value_tag 17
#define google_firestore_v1_Value_bytes_value_tag 18
#define google_firestore_v1_Document_FieldsEntry_key_tag 1
#define google_firestore_v1_Document_FieldsEntry_value_tag 2
#define google_firestore_v1_MapValue_FieldsEntry_key_tag 1
#define google_firestore_v1_MapValue_FieldsEntry_value_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_firestore_v1_Document_fields[5];
extern const pb_field_t google_firestore_v1_Document_FieldsEntry_fields[3];
extern const pb_field_t google_firestore_v1_Value_fields[12];
extern const pb_field_t google_firestore_v1_ArrayValue_fields[2];
extern const pb_field_t google_firestore_v1_MapValue_fields[2];
extern const pb_field_t google_firestore_v1_MapValue_FieldsEntry_fields[3];

/* Maximum encoded size of messages (where known) */
/* google_firestore_v1_Document_size depends on runtime parameters */
/* google_firestore_v1_Document_FieldsEntry_size depends on runtime parameters */
/* google_firestore_v1_Value_size depends on runtime parameters */
/* google_firestore_v1_ArrayValue_size depends on runtime parameters */
/* google_firestore_v1_MapValue_size depends on runtime parameters */
/* google_firestore_v1_MapValue_FieldsEntry_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define DOCUMENT_MESSAGES \


#endif


}  // namespace firestore
}  // namespace firebase
/* @@protoc_insertion_point(eof) */

#endif
