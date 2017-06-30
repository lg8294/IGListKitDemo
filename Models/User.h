//
//  User.h
//  IGListKitDemo
//
//  Created by iOS on 2017/6/29.
//  Copyright © 2017年 lg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IGListKit.h>

@interface User : NSObject <IGListDiffable>

@property (nonatomic, assign) NSInteger pk;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *handle;

- (instancetype)initWithPk:(NSInteger)pk name:(NSString *)name handle:(NSString *)handle;

@end
