//
//  KJBannerViewCell.h
//  KJBannerView
//
//  Created by 杨科军 on 2018/2/27.
//  Copyright © 2018年 杨科军. All rights reserved.
//  https://github.com/yangKJ/KJBannerViewDemo

#import <UIKit/UIKit.h>
#import "KJBannerDatasInfo.h"

@interface KJBannerViewCell : UICollectionViewCell
/// 数据模型 - 用于自定义 itemClass 样式传递数据
@property (nonatomic,strong) NSObject *model;

/// 图片显示方式
@property (nonatomic,assign) UIViewContentMode bannerContentMode;
/// 圆角
@property (nonatomic,assign) CGFloat bannerRadius;
/// 是否裁剪，默认NO
@property (nonatomic,assign) BOOL bannerScale;
/// 是否采用动态图缓存，默认NO
@property (nonatomic,assign) BOOL openGIFCache;
/// 自带数据模型
@property (nonatomic,strong) KJBannerDatasInfo *info;
/// 使用KJBannerViewDataSource方式时候使用
@property (nonatomic,strong) UIView *itemView;

@end
