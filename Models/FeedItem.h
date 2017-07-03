//
//  FeedItem.h
//  IGListKitDemo
//
//  Created by iOS on 2017/7/3.
//  Copyright © 2017年 lg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface FeedItem : NSObject <IGListDiffable>

@property (nonatomic, assign) NSInteger pk;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSArray *comments;

- (instancetype)initWithPk:(NSInteger)pk user:(User *)user comments:(NSArray *)comments;
+ (instancetype)feedItemWithPk:(NSInteger)pk user:(User *)user comments:(NSArray *)comments;

@end
