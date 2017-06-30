//
//  GridItem.h
//  IGListKitDemo
//
//  Created by iOS on 2017/6/29.
//  Copyright © 2017年 lg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IGListKit.h>

@interface GridItem : NSObject <IGListDiffable>

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) NSInteger itemCount;

- (instancetype)initWithColor:(UIColor *)color itemCount:(NSInteger)itemCount;

@end
