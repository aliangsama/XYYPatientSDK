//
//  DoctorHomeKemuCell.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/18.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DoctorKemuStruce;
@interface DoctorHomeKemuCell : UITableViewCell
- (void)reloadDataWithModel:(DoctorKemuStruce*)model;
@end
