/*
 * UIActivityViewController.h 
 *
 * (c) 2012-2015
 * Framework: UIKit
 *
 * Author: 白开水ln,（https://github.com/CoderLN）
 *
 * Created by 【WechatPublic-Codeidea】 on Elegant programming.
 * Copyright © Reprinted（Blog https://githubidea.github.io）Please indicate the source.Mustbe.
 *
 *
 * 🐾 |Codeidea 用文字记录自己的思想与经验 | 编程 | 职场 | 阅读 | 摄影 | 体验 | 👣
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UIActivity.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^UIActivityViewControllerCompletionHandler)(UIActivityType __nullable activityType, BOOL completed);
typedef void (^UIActivityViewControllerCompletionWithItemsHandler)(UIActivityType __nullable activityType, BOOL completed, NSArray * __nullable returnedItems, NSError * __nullable activityError);

NS_CLASS_AVAILABLE_IOS(6_0) __TVOS_PROHIBITED @interface UIActivityViewController : UIViewController

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithActivityItems:(NSArray *)activityItems applicationActivities:(nullable NSArray<__kindof UIActivity *> *)applicationActivities NS_DESIGNATED_INITIALIZER;

@property(nullable, nonatomic, copy) UIActivityViewControllerCompletionHandler completionHandler NS_DEPRECATED_IOS(6_0, 8_0, "Use completionWithItemsHandler instead.");  // set to nil after call
@property(nullable, nonatomic, copy) UIActivityViewControllerCompletionWithItemsHandler completionWithItemsHandler NS_AVAILABLE_IOS(8_0); // set to nil after call

@property(nullable, nonatomic, copy) NSArray<UIActivityType> *excludedActivityTypes; // default is nil. activity types listed will not be displayed

@end

NS_ASSUME_NONNULL_END_START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
