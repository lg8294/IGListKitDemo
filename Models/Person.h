//
//  Person.h
//  IGListKitDemo
//
//  Created by iOS on 2017/7/3.
//  Copyright © 2017年 lg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IGListKit.h>

@interface Person : NSObject <IGListDiffable>

@property (nonatomic, assign) NSInteger pk;
@property (nonatomic, copy) NSString *name;

+ (instancetype)personWithPk:(NSInteger)pk name:(NSString *)name;

@end
