//
//  YLImageView.h
//  YLGIFImage
//
//  Created by Yong Li on 14-3-2.
//  Copyright (c) 2014年 Yong Li. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "YLGIFImage.h"

@interface YLImageView : UIImageView

@property (nonatomic, copy) NSString *runLoopMode;
- (YLGIFImage *)animatedImage;

@end
