//
//  DemoSectionController.m
//  IGListKitExamples
//
//  Created by iOS on 2017/6/27.
//  Copyright © 2017年 Instagram. All rights reserved.
//

#import "DemoSectionController.h"
#import "LabelCell.h"

@implementation DemoItem

- (instancetype)initWithName:(NSString *)name controllerClass:(Class)controllerClass controllerIdentifier:(NSString *)controllerIdentifier {
    self = [super init];
    if (self) {
        _name = [name copy];
        _controllerClass = [controllerClass copy];
        _controllerIdentifier = [controllerIdentifier copy];
    }
    return self;
}

+ (instancetype)DemoItemWithName:(NSString *)name controllerClass:(Class)controllerClass controllerIdentifier:(NSString *)controllerIdentifier {
    return [[self alloc] initWithName:name controllerClass:controllerClass controllerIdentifier:controllerIdentifier];
}

+ (instancetype)DemoItemWithName:(NSString *)name controllerClass:(Class)controllerClass {
    return [[self alloc] initWithName:name controllerClass:controllerClass controllerIdentifier:nil];
}

- (id<NSObject>)diffIdentifier {
    return _name;
}

- (BOOL)isEqualToDiffableObject:(id<IGListDiffable>)object {
    if (self == object) {
        return YES;
    }
    
    if (![(NSObject *)object isKindOfClass:[DemoItem class]]) {
        return NO;
    }
    
    DemoItem *oobject = (DemoItem *)object;
    return _controllerClass == oobject.controllerClass && [_controllerIdentifier isEqualToString:oobject.controllerIdentifier];
}
@end

@implementation DemoSectionController

- (CGSize)sizeForItemAtIndex:(NSInteger)index {
    return CGSizeMake(self.collectionContext.containerSize.width, 55);
}

- (UICollectionViewCell *)cellForItemAtIndex:(NSInteger)index {
    LabelCell *cell = [self.collectionContext dequeueReusableCellOfClass:[LabelCell class] forSectionController:self atIndex:index];
    
    cell.text = self.object.name;
    return cell;
}

- (void)didUpdateToObject:(id)object {
    if ([object isKindOfClass:[DemoItem class]]) {
        _object = (DemoItem *)object;
    }
}

- (void)didSelectItemAtIndex:(NSInteger)index {
    UIViewController *controller;
    
    if (self.object.controllerIdentifier) {
        UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Demo" bundle:nil];
        controller = [storyboard instantiateViewControllerWithIdentifier:self.object.controllerIdentifier];
        
    } else {
        controller = [[self.object.controllerClass alloc] init];
    }
    
    if (controller) {
        controller.title = self.object.name;
        [self.viewController.navigationController pushViewController:controller animated:YES];
    }
}
@end
