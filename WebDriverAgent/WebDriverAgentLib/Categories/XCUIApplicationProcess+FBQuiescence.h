/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <XCTest/XCTest.h>

#import "XCUIApplicationProcess.h"

NS_ASSUME_NONNULL_BEGIN

@interface XCUIApplicationProcess (FBQuiescence)

/*! Defines wtether the process should perform quiescence checks. YES by default */
@property (nonatomic) NSNumber* fb_shouldWaitForQuiescence;

@end

NS_ASSUME_NONNULL_END
