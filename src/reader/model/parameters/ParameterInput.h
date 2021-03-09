/********************************************************************************
 * Copyright (c) 2020 AVL List GmbH and others
 * 
 * This program and the accompanying materials are made available under the
 * terms of the Apache Software License 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0.
 * 
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/

#ifndef MCX_READER_MODEL_PARAMETERS_PARAMETER_INPUT_H
#define MCX_READER_MODEL_PARAMETERS_PARAMETER_INPUT_H

#include "reader/core/InputElement.h"

#include "reader/model/parameters/ArrayParameterInput.h"
#include "reader/model/parameters/ScalarParameterInput.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum ParameterInputType {
    PARAMETER_ARRAY,
    PARAMETER_SCALAR
} ParameterInputType;

typedef union ParameterInputParameter {
    ArrayParameterInput * arrayParameter;
    ScalarParameterInput * scalarParameter;
} ParameterInputParameter;

extern const ObjectClass _ParameterInput;

typedef struct ParameterInput {
    InputElement _;

    ParameterInputType type;
    ParameterInputParameter parameter;
} ParameterInput;

#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif /* __cplusplus */

#endif // MCX_READER_MODEL_PARAMETERS_PARAMETER_INPUT_H