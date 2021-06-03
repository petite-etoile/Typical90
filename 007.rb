def get_dissa(array_A, b)
    ok = -1
    ng = array_A.size()
    while (ng - ok > 1)
        mid = (ok+ng)/2
        if(array_A[mid] <= b)
            ok = mid
        else
            ng = mid
        end
    end


    res = 2e9
    if(0 <= ok)
        res = b - array_A[ok]
    end
    if(ng < array_A.size()) 
        res = [res, array_A[ng]-b].min
    end

    return res
end

N = gets().to_i()
array_A = gets().split().map(&:to_i)
array_A = array_A.sort()
Q = gets().to_i()

Q.times do 
    b = gets().to_i()
    puts get_dissa(array_A,b)
end