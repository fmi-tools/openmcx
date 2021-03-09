/********************************************************************************
 * Copyright (c) 2020 AVL List GmbH and others
 * 
 * This program and the accompanying materials are made available under the
 * terms of the Apache Software License 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0.
 * 
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/

#include "reader/task/BackendInput.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

static void BackendInputDestructor(BackendInput * input) {
}

static BackendInput * BackendInputCreate(BackendInput * input) {
    input->type = BACKEND_CSV;

    OPTIONAL_UNSET(input->storeAtRuntime);

    return input;
}

OBJECT_CLASS(BackendInput, InputElement);

#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif /* __cplusplus */