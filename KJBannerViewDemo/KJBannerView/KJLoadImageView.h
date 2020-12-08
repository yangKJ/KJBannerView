//
//  KJLoadImageView.h
//  iSchool
//
//  Created by 杨科军 on 2018/12/22.
//  Copyright © 2018 杨科军. All rights reserved.
//  https://github.com/yangKJ/KJBannerViewDemo
//  不依赖三方网络加载图片显示

#import <UIKit/UIKit.h>
#import "KJBannerViewType.h"
#import "KJBannerViewLoadManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface KJLoadImageView : UIImageView
/// 指定URL下载图片失败时重试的次数，默认为2次
@property (nonatomic,assign)NSUInteger kj_failedTimes;
/// 是否裁剪为ImageView的尺寸，默认为NO
@property (nonatomic,assign)BOOL kj_isScale;
/// 使用这些方法下载图像异步
- (void)kj_setImageWithURLString:(NSString*)url Placeholder:(UIImage*)placeholderImage;
- (void)kj_setImageWithURLString:(NSString*)url Placeholder:(UIImage*)placeholderImage Completion:(void(^_Nullable)(UIImage*image))completion;

/// 清理掉本地缓存
+ (void)kj_clearImagesCache;
/// 获取图片缓存的占用的总大小
+ (unsigned long long)kj_imagesCacheSize;

@end

NS_ASSUME_NONNULL_END
