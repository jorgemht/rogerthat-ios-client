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

#import "MCTWidget.h"
#import "PSPDFTextView.h"


@interface MCTTextBlockView : UIControl <MCTWidget, UITextViewDelegate>

@property (nonatomic) CGFloat width;
@property (nonatomic, strong) NSDictionary *widgetDict;
@property (nonatomic, strong) IBOutlet PSPDFTextView *textView;
@property (nonatomic, strong) IBOutlet UITextField *dummyField;
@property (nonatomic, strong) IBOutlet UILabel *placeHolderLbl;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *rightBarButtonItem;
@property (nonatomic) MCTlong maxChars;

- (id)initWithDict:(NSDictionary *)widgetDict
          andWidth:(CGFloat)width
    andColorScheme:(MCTColorScheme)colorScheme
  inViewController:(MCTUIViewController<UIAlertViewDelegate, UIActionSheetDelegate> *)vc;

- (CGFloat)height;
- (MCT_com_mobicage_to_messaging_forms_UnicodeWidgetResultTO *)result;
- (NSDictionary *)widget;

@end