//
//  AppotaUtil+ImageHelper.h
//  AppotaSDK
//
//  Created by tuent on 11/21/13.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaUtil.h"

@interface AppotaUtil (ImageHelper)
+ (void) stretchWithImageView:(UIImageView*) imageView
             withWidthStretch:(float) width
            withHeightStretch:(float) height;
+ (void) stretchImageViewWithUIImage:(UIImage*) image
                       withImageView:(UIImageView*) imageView
                    withWidthStretch:(float) width
                   withHeightStretch:(float) height;
+ (void) addMaskRoundCornerToView:(UIView*) originView
                       withRadius:(float) radius;
+ (UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;
@end
