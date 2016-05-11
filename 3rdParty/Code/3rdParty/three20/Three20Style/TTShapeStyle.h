//
// Copyright 2009-2011 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// Style
#import "TTStyle.h"

@class TTShape;

/**
 * Causes all layers going forward to use a particular shape.
 */
@interface TTShapeStyle : TTStyle {
  TTShape* _shape;
}

@property (nonatomic, strong) TTShape* shape;

+ (TTShapeStyle*)styleWithShape:(TTShape*)shape next:(TTStyle*)next;

@end