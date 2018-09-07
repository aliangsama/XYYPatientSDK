//
//  drugstorePoint.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/27.
//  Copyright © 2018年 hlw. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface drugstorePoint : NSObject<MKAnnotation>
//实现MKAnnotation协议必须要定义这个属性
@property (nonatomic,assign) CLLocationCoordinate2D coordinate;
//标题
@property (nonatomic,copy) NSString *title;
//  大头针的子标题
@property (nonatomic, copy) NSString *subtitle;
- (instancetype)initWithAnnotationWithCoordinate:(CLLocationCoordinate2D )coordinate title:(NSString *)title subtit:(NSString *)subtit;

@end
