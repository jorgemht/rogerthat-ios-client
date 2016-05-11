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

@interface MCTMessageBreadCrumb : NSObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *parentKey;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) MCTlong timestamp;

@end


#pragma mark -

@interface MCTMessageBreadCrumbs : NSObject

@property (nonatomic, strong) NSArray *previous;
@property (nonatomic, strong) NSArray *next;

@end