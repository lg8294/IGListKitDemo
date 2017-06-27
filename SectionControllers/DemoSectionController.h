//
//  DemoSectionController.h
//  IGListKitExamples
//
//  Created by iOS on 2017/6/27.
//  Copyright © 2017年 Instagram. All rights reserved.
//

#import <IGListKit/IGListKit.h>

@interface DemoItem : NSObject <IGListDiffable>

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) Class controllerClass;
@property (nonatomic, copy, readonly) NSString *controllerIdentifier;

- (instancetype)initWithName:(NSString *)name controllerClass:(Class)controllerClass controllerIdentifier:(NSString *)controllerIdentifier;
+ (instancetype)DemoItemWithName:(NSString *)name controllerClass:(Class)controllerClass controllerIdentifier:(NSString *)controllerIdentifier;
+ (instancetype)DemoItemWithName:(NSString *)name controllerClass:(Class)controllerClass;

//- (instancetype)init; NS_UNAVAILABLE;
//- (instancetype)new; NS_UNAVAILABLE;

@end

@interface DemoSectionController : IGListSectionController

@property (nonatomic, strong, readonly) DemoItem *object;

@end
