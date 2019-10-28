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

#ifndef PB_GOOGLE_API_HTTP_NANOPB_H_INCLUDED
#define PB_GOOGLE_API_HTTP_NANOPB_H_INCLUDED
#include <pb.h>

#include "absl/strings/str_cat.h"
#include "nanopb_pretty_printers.h"

namespace firebase {
namespace firestore {
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Struct definitions */
typedef struct _google_api_CustomHttpPattern {
    pb_bytes_array_t *kind;
    pb_bytes_array_t *path;

    static const char* Name() {
        return "CustomHttpPattern";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<CustomHttpPattern 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintField("kind: ", kind, indent + 1, false);
        result += PrintField("path: ", path, indent + 1, false);

        if (!result.empty() || is_root) {
          std::string tail = Indent(is_root ? 0 : indent) + '}';
          return header + result + tail;
        } else {
          return "";
        }
    }
/* @@protoc_insertion_point(struct:google_api_CustomHttpPattern) */
} google_api_CustomHttpPattern;

typedef struct _google_api_Http {
    pb_size_t rules_count;
    struct _google_api_HttpRule *rules;
    bool fully_decode_reserved_expansion;

    static const char* Name() {
        return "Http";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<Http 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintRepeatedField("rules ",
            rules, rules_count, indent + 1);
        result += PrintField("fully_decode_reserved_expansion: ", fully_decode_reserved_expansion, indent + 1, false);

        if (!result.empty() || is_root) {
          std::string tail = Indent(is_root ? 0 : indent) + '}';
          return header + result + tail;
        } else {
          return "";
        }
    }
/* @@protoc_insertion_point(struct:google_api_Http) */
} google_api_Http;

typedef struct _google_api_HttpRule {
    pb_bytes_array_t *selector;
    pb_size_t which_pattern;
    union {
        pb_bytes_array_t *get;
        pb_bytes_array_t *put;
        pb_bytes_array_t *post;
        pb_bytes_array_t *delete_;
        pb_bytes_array_t *patch;
        google_api_CustomHttpPattern custom;
    };
    pb_bytes_array_t *body;
    pb_size_t additional_bindings_count;
    struct _google_api_HttpRule *additional_bindings;

    static const char* Name() {
        return "HttpRule";
    }

    std::string ToString(int indent = 0) const {
        std::string result;

        bool is_root = indent == 0;
        std::string header;
        if (is_root) {
            indent = 1;
            auto p = absl::Hex{reinterpret_cast<uintptr_t>(this)};
            absl::StrAppend(&header, "<HttpRule 0x", p, ">: {\n");
        } else {
            header = "{\n";
        }

        result += PrintField("selector: ", selector, indent + 1, false);
        switch (which_pattern) {
          case 2: // google_api_HttpRule_get_tag
            result += PrintField("get: ", get, indent + 1, true);
            break;
          case 3: // google_api_HttpRule_put_tag
            result += PrintField("put: ", put, indent + 1, true);
            break;
          case 4: // google_api_HttpRule_post_tag
            result += PrintField("post: ", post, indent + 1, true);
            break;
          case 5: // google_api_HttpRule_delete_tag
            result += PrintField("delete_: ", delete_, indent + 1, true);
            break;
          case 6: // google_api_HttpRule_patch_tag
            result += PrintField("patch: ", patch, indent + 1, true);
            break;
          case 8: // google_api_HttpRule_custom_tag
            result += PrintField("custom ", custom, indent + 1, true);
            break;
        }

        result += PrintField("body: ", body, indent + 1, false);
        result += PrintRepeatedField("additional_bindings ",
            additional_bindings, additional_bindings_count, indent + 1);

        if (!result.empty() || is_root) {
          std::string tail = Indent(is_root ? 0 : indent) + '}';
          return header + result + tail;
        } else {
          return "";
        }
    }
/* @@protoc_insertion_point(struct:google_api_HttpRule) */
} google_api_HttpRule;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_api_Http_init_default             {0, NULL, 0}
#define google_api_HttpRule_init_default         {NULL, 0, {NULL}, NULL, 0, NULL}
#define google_api_CustomHttpPattern_init_default {NULL, NULL}
#define google_api_Http_init_zero                {0, NULL, 0}
#define google_api_HttpRule_init_zero            {NULL, 0, {NULL}, NULL, 0, NULL}
#define google_api_CustomHttpPattern_init_zero   {NULL, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define google_api_CustomHttpPattern_kind_tag    1
#define google_api_CustomHttpPattern_path_tag    2
#define google_api_Http_rules_tag                1
#define google_api_Http_fully_decode_reserved_expansion_tag 2
#define google_api_HttpRule_get_tag              2
#define google_api_HttpRule_put_tag              3
#define google_api_HttpRule_post_tag             4
#define google_api_HttpRule_delete_tag           5
#define google_api_HttpRule_patch_tag            6
#define google_api_HttpRule_custom_tag           8
#define google_api_HttpRule_selector_tag         1
#define google_api_HttpRule_body_tag             7
#define google_api_HttpRule_additional_bindings_tag 11

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_api_Http_fields[3];
extern const pb_field_t google_api_HttpRule_fields[10];
extern const pb_field_t google_api_CustomHttpPattern_fields[3];

/* Maximum encoded size of messages (where known) */
/* google_api_Http_size depends on runtime parameters */
/* google_api_HttpRule_size depends on runtime parameters */
/* google_api_CustomHttpPattern_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define HTTP_MESSAGES \


#endif


}  // namespace firestore
}  // namespace firebase
/* @@protoc_insertion_point(eof) */

#endif
