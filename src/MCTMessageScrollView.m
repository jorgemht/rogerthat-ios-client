/*
 * Copyright 2016 Mobicage NV
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @@license_version:1.1@@
 */

#import "MCTMessageScrollView.h"


@implementation MCTMessageScrollView

- (void)removeFromSuperview
{
    T_UI();
    MCT_RELEASE(self.touchDelegate);
    [super removeFromSuperview];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
{
    T_UI();
    if (!self.dragging) {
        BOOL exclusiveTouch = NO;
        for (UITouch *touch in touches) {
            if (touch.view.exclusiveTouch) {
                exclusiveTouch = YES;
                break;
            }
        }
        if (!exclusiveTouch) {
            [self.touchDelegate touchesEnded:touches withEvent:event];
        }
    } else {
        [super touchesEnded:touches withEvent:event];
    }
}

@end