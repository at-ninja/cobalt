// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_VARIATIONS_EXPERIMENT_LABELS_H_
#define COMPONENTS_VARIATIONS_EXPERIMENT_LABELS_H_

#include "base/metrics/field_trial.h"
#include <string>

namespace variations {

// Takes the value of experiment_labels from the registry and returns a valid
// experiment_labels string value containing only the labels that are not
// associated with Chrome Variations.
std::u16string ExtractNonVariationLabels(const std::u16string& labels);

}  // namespace variations

#endif  // COMPONENTS_VARIATIONS_EXPERIMENT_LABELS_H_
