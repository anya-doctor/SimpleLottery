//
//  UIAlertView+Blocks.h
//  UIKitCategoryAdditions
//

#import <Foundation/Foundation.h>

typedef void (^DismissBlock)(int buttonIndex);
typedef void (^CancelBlock)();


// 这里为了演示 过程式编程 和 函数式编程
// 函数式编程中, 代码读起来更像人类语言.
@interface UIAlertView (Blocks) <UIAlertViewDelegate>

+ (UIAlertView *) showAlertViewWithTitle:(NSString *) title
                                 message:(NSString *) message
                       cancelButtonTitle:(NSString *) cancelButtonTitle
                       otherButtonTitles:(NSArray *) otherButtons
                               onDismiss:(DismissBlock) dismissed
                                onCancel:(CancelBlock) cancelled;

@end
