//
//  CHDraggingCoordinator.h
//  ChatHeads
//
//  Created by Matthias Hochgatterer on 4/19/13.
//  Copyright (c) 2013 Matthias Hochgatterer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AppotaGameSDKCHDraggableView.h"

typedef enum {
    CHSnappingEdgeBoth,
    CHSnappingEdgeRight,
    CHSnappingEdgeLeft
} CHSnappingEdge;

@protocol CHDraggingCoordinatorDelegate;
@interface AppotaGameSDKCHDraggingCoordinator : NSObject <CHDraggableViewDelegate>

@property (nonatomic) CHSnappingEdge snappingEdge;
@property (nonatomic, unsafe_unretained) id<CHDraggingCoordinatorDelegate> delegate;

- (id)initWithWindow:(UIWindow *)window draggableViewBounds:(CGRect)bounds;

@end

@protocol CHDraggingCoordinatorDelegate <NSObject>

- (UIViewController *)draggingCoordinator:(AppotaGameSDKCHDraggingCoordinator *)coordinator viewControllerForDraggableView:(AppotaGameSDKCHDraggableView *)draggableView;

@end
